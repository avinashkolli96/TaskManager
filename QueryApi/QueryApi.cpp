// QueryApi.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "QueryApi.h"
#include <iostream>


// This is an example of an exported variable
QUERYAPI_API int nQueryApi=0;

// This is an example of an exported function.
QUERYAPI_API int fnQueryApi(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CQueryApi::CQueryApi()
{
    return;
}

void CQueryApi::GenericQueryCall(void)
{
    std::cout << "Result from Query Api\n";
}
