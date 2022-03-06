// Application.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Application.h"
#include <iostream>
#include "../QueryApi/QueryApi.h"
#include "../CommandApi/CommandApi.h"


// This is an example of an exported variable
APPLICATION_API int nApplication=0;

// This is an example of an exported function.
APPLICATION_API int fnApplication(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CApplication::CApplication()
{
    return;
}

void CApplication::ApplicationFunction(void)
{
    std::cout << "Function Call from Application library\n";
    CQueryApi queryApi;
    queryApi.GenericQueryCall();
    CCommandApi commandApi;
    commandApi.genericCommandCall();
}
