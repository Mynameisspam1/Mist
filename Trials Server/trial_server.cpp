#include "trial_server.h"

//global variables

string data;
bool counter;
    
//not global variables
    
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

void ServerCrash::recieveAndExecute()
{
  /*try
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
	  counter = false;
	}
      }
    }
  }
  catch (SocketException& e)
  {
    std::cout << "Exception was caught here: " << e.description() << endl;
  }*/
  
  try
    {
      // Create the socket
      ServerSocket server (41300);

      while (true)
	{

	  ServerSocket new_sock;
	  server.accept ( new_sock );

	  try
	    {
	      while (true)
		{
		  new_sock >> data;
		  new_sock << data;
		}
	    }
	  catch (SocketException&) {}
	    if (data == "crash now")
	    {
	      likeWindows95();
	    }
	}
    }
  catch (SocketException& e)
    {
      std::cout << "Exception was caught:" << e.description() << "\nExiting.\n";
    }
}

int ServerCrash::likeWindows95()
{
  cout << "likeWindows95 is running now:" << endl;
  while(true)
  {
    // Memory leak
    int * q = new int;
    // no delete
  }
}
