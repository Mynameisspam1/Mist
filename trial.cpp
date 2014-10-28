//include nessesary boost items

#include "trail.h"

int main(){

  string sep;
  
  cout >> "Client or Server?";
  cin << sep;
  crashObj.initCrash(sep);

}

crash::crash(){
  //construct shit here
}

crash::~crash(){
  //destruct shit here
}

void crash::initCrash(string sep){
    if(sep == "client" || sep == "Client")
      isClient = true;
    else if(sep == "server" || sep == "Server")
      isClient = false;
    else
      exit(0);
}

void crash::exeCrash(){
  
}

void crash