#include"iklasa.h"

class Klasa: public IKlasa {
public:
	Klasa();
	~Klasa();
	virtual ULONG STDMETHODCALLTYPE AddRef();
	virtual ULONG STDMETHODCALLTYPE Release();
	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void **ptr);
	virtual HRESULT STDMETHODCALLTYPE Push(int val);
	virtual HRESULT STDMETHODCALLTYPE PopEx(int *val);
	virtual int STDMETHODCALLTYPE Pop();

private:
	ULONG m_ref;
	int stos[100];
	int nr;

	};
