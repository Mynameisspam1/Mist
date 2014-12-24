#ifndef TRIAL_SERVER_H
#define TRIAL_SERVER_H

#include <ServerSocket.h>
#include <ServerException.h>
#include <string>
#include <iostream>

using namespace std;

class ServerCrash
{
private:
    ServerCrash();
    ~ServerCrash();
    
    void recieveAndExecute();
    
    static string data;
    static bool counter;
    
} trialObj;
