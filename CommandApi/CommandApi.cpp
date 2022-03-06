// CommandApi.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "CommandApi.h"
#include <iostream>


// This is an example of an exported variable
COMMANDAPI_API int nCommandApi=0;

// This is an example of an exported function.
COMMANDAPI_API int fnCommandApi(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCommandApi::CCommandApi()
{
    return;
}

void CCommandApi::genericCommandCall(void)
{
    std::cout << "Command Executed in command Api\n";
}
