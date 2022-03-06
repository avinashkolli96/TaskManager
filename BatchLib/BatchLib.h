// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BATCHLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BATCHLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BATCHLIB_EXPORTS
#define BATCHLIB_API __declspec(dllexport)
#else
#define BATCHLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll
class BATCHLIB_API CBatchLib {
public:
	CBatchLib(void);
	// TODO: add your methods here.
	void batchMode(void);
};

extern BATCHLIB_API int nBatchLib;

BATCHLIB_API int fnBatchLib(void);
