// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the QUERYAPI_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// QUERYAPI_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef QUERYAPI_EXPORTS
#define QUERYAPI_API __declspec(dllexport)
#else
#define QUERYAPI_API __declspec(dllimport)
#endif

// This class is exported from the dll
class QUERYAPI_API CQueryApi {
public:
	CQueryApi(void);
	// TODO: add your methods here.
	void GenericQueryCall(void);
};

extern QUERYAPI_API int nQueryApi;

QUERYAPI_API int fnQueryApi(void);
