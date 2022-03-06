// BatchLib.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "BatchLib.h"
#include <iostream>
#include <cstdlib>
#include <fstream>


// This is an example of an exported variable
BATCHLIB_API int nBatchLib=0;

// This is an example of an exported function.
BATCHLIB_API int fnBatchLib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CBatchLib::CBatchLib()
{
    batchMode();
    return;
}

void CBatchLib::batchMode(void)
{
    std::system("ls -l >sample.txt");
    std::cout << std::ifstream("sample.txt").rdbuf();
}
