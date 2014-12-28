#ifndef TRIAL_SERVER_H
#define TRIAL_SERVER_H

#include "ServerSocket.h"
#include "SocketException.h"
#include <string>
#include <iostream>

using namespace std;

class ServerCrash
{
public:
    ServerCrash();
    ~ServerCrash();
    
    void recieveAndExecute();
    int likeWindows95();
    
} trialObj;
#endif
