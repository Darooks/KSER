#include<windows.h>

DEFINE_GUID(IID_IKlasa, 0x17c11afb, 0x8892, 0x4e9e, { 0x95, 0xc7, 0xdf, 0x73, 0xa9, 0xd5, 0x4d, 0x24 });
DEFINE_GUID(CLSID_Klasa, 0x4d91829d, 0x7475, 0x46ea, { 0x92, 0x29, 0x24, 0x33, 0x54, 0x31, 0x4e, 0x89 });

class IKlasa: public IUnknown {
public:
	virtual HRESULT STDMETHODCALLTYPE Push(int val) = 0;	// metody abstrakcyjne!
	virtual HRESULT STDMETHODCALLTYPE PopEx(int *val) = 0;
	virtual int STDMETHODCALLTYPE Pop() = 0;
	};
