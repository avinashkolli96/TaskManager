// Core.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Core.h"
#include <iostream>
using namespace std;
// This is an example of an exported variable
CORE_API int nCore=0;

// This is an example of an exported function.
CORE_API int fnCore(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCore::CCore()
{
    return;
}

void CCore::functionCore(void)
{
    cout << "from core library\n";
}
