//include nessesary boost items

#include "trail.h"

int main(){
  crashObj.offloadCrash();
  return 0;
}

ClientCrash::ClientCrash()
{
  //construct shit here
}

ClientCrash::~ClientCrash()
{
  //destruct shit here
}

void ClientCrash::offloadCrash()
{
  try
  {
    ClientSocket client_socket("localhost", 41300); //Homestuck. This is what the reference
    try
    {
      client_socket << "crash now";
      client_socket >> reply;
    }
  }
  catch (SocketException& e)
  {
    std::cout << "Exception was caught here: " << e.description() << endl;
  }
}
