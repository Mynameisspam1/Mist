#ifndef TRAIL_H
#define TRAIL_H

#include <string>

//include the nessesary files from Boost and cppnetlib

using namespace std;

class crash{
  public:
    crash();
    ~crash();
   
    void initCrash(string split); //defines server and client via user input
    void exeCrash(); //starts the crash process on client and streams data to server
    void offloadCrash(); //starts the offload process
    
    bool isClient; //true = client, false = server
   
   
} crashObj;

#endif