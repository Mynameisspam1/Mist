#include "trial_server.h"

int main()
{
  trialObj.recieveAndExecute();
  return 0;
}

ServerCrash::ServerCrash()
{
  //Empty for now
}

ServerCrash::~ServerCrash()
{
  //Empty for now
}

ServerCrash::recieveAndExecute()
{
  try
  {
    ServerSocket server (41300);
    while(true)
    {
      ServerSocket new_sock;
      server.accept(new_sock);
      try
      {
	while(true)
	{
	  new_sock >> data;
	  new_sock << data;
	}
      }
      catch (SocketException&){}
      
      while(counter)
      {
	usleep(1);
	if(data == "crash now")
	{
	  likeWindows95();
	  server.shutdown();
	  counter = false;
	}
      }
    }
  }
  catch (SocketException& e)
  {
    std::cout << "Exception was caught here: " << e.description() << endl;
  }
}
