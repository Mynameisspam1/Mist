#include "trial_server.h"

int main()
{
  trialObj.recieveAndExecute();
  return 0;
}

ServerCrash::ServerCrash()
{
  //WHAT DOES THIS EVEN FUCKING DO?!?!?!!?!?1!/?
}

ServerCrash::~ServerCrash()
{
  //Does stuff, mainly destroys them
}

ServerCrash::recieveAndExecute()
{
  try
  {
    ServerSocket server (41300);
    //magical code
  }
  catch (SocketException& e)
  {
    std::cout << "Exception was caught here: " << e.description() << endl;
  }
}