#ifndef TRIAL_SERVER_H
#define TRIAL_SERVER_H

#include <ServerSocket.h>
#include <ServerException.h>
#include <string>


using namespace std;

class ServerCrash
{
    ServerCrash();
    ~ServerCrash();
    
    void recieveAndExecute();
    
} trialObj;