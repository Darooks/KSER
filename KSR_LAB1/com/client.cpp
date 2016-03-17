#include<windows.h>
#include<stdio.h>
#include<conio.h>

#include"..\com\iklasa.h"

int main() {
	HRESULT rv;
	CoInitializeEx(NULL, COINIT_MULTITHREADED);
	printf("starting\n");
	IKlasa *k;

	//w przypadku serwera w dll-ce (inproc)
	//rv = CoCreateInstance(CLSID_Klasa, NULL, CLSCTX_INPROC_SERVER, IID_IKlasa, (void **)&k);
	
	//w przypadku surrogate i serwera w exeku:
	rv = CoCreateInstance(CLSID_Klasa, NULL, CLSCTX_LOCAL_SERVER, IID_IKlasa, (void **)&k);
	printf("res = %08X (%s)\n", rv, rv == S_OK ? "OK" : "bad");
	if(rv != S_OK) {
		printf("error creating instance gle=%08X %d\n", GetLastError(), GetLastError());
		CoUninitialize();
		return 0;
		};

	// uda³o siê stworzyæ klasê
	int val;
	k->Push(1);
	k->Push(2);
	k->Push(3);

	// tylko dla inproc-a
	//printf("%d\n", k->Pop());
	//printf("%d\n", k->Pop());

	k->PopEx(&val);	printf("%d\n", val);
	k->PopEx(&val);	printf("%d\n", val);
	k->PopEx(&val);	printf("%d\n", val);
	rv = k->PopEx(&val);
	printf("%08X (%s)\n", rv, rv == E_FAIL ? "E_FAIL" : "other");

	// po u¿yciu trzeba zwolniæ
	k->Release();

	printf("done\n");
	CoUninitialize();
	return 0;
	};
