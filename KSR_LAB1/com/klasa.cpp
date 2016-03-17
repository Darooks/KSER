#include<windows.h>
#include"klasa.h"


extern volatile int usageCount;


Klasa::Klasa() {
	m_ref = 0;
	nr = 0;
	usageCount++;
	};


Klasa::~Klasa() {
	usageCount--;
	};


ULONG STDMETHODCALLTYPE Klasa::AddRef() {
	InterlockedIncrement(&m_ref);
	return m_ref;
	};


ULONG STDMETHODCALLTYPE Klasa::Release() {
	ULONG rv = InterlockedDecrement(&m_ref);
	if (rv == 0) delete this;
	return rv;
	};


HRESULT STDMETHODCALLTYPE Klasa::QueryInterface(REFIID iid, void **ptr) {
	if(ptr == NULL) return E_POINTER;
	if(IsBadWritePtr(ptr, sizeof(void *))) return E_POINTER;
	*ptr = NULL;
	if(iid == IID_IUnknown) *ptr = this;
	if(iid == IID_IKlasa) *ptr = this;
	if(*ptr != NULL) { AddRef(); return S_OK; };
	return E_NOINTERFACE;
	};


HRESULT STDMETHODCALLTYPE Klasa::Push(int val) {
	
	stos[nr] = val;
	nr++;
	return S_OK;
	};


HRESULT STDMETHODCALLTYPE Klasa::PopEx(int *val) {
	
	if (nr > 0)
	{
		nr--;
		*val = stos[nr];
		return S_OK;
	}
	else
	{
		val = NULL;
		return E_FAIL;
	}

	};


int STDMETHODCALLTYPE Klasa::Pop() {
	if (nr > 0)
	{
		nr--;
		return stos[nr];
	}
	else
	{
		return -1;
	}
	};
