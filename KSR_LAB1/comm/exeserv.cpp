#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include"C:\Users\pppp\Desktop\KSR_LAB1\com\iklasa.h"
#include"C:\Users\pppp\Desktop\KSR_LAB1\com\factory.h"


volatile int usageCount;


int main(int argc, const char **argv) {
	int i;
	DWORD id;
	HRESULT rv;

	for(i = 0; i < argc; i++) printf("%s\n", argv[i]);
	if(argc != 2) return 0;
	CoInitializeEx(NULL, COINIT_MULTITHREADED);

	if(stricmp(argv[1] + 1, "RegServer") == 0) {
		printf("tu by³aby rejestracja\n");
	} else if(stricmp(argv[1] + 1, "UnregServer") == 0) {
		printf("tu by³oby wyrejestrowanie\n");
	} else if(stricmp(argv[1] + 1, "Embedding") == 0) {
		KlasaFactory *f = new KlasaFactory();
		f->AddRef();
		rv = CoRegisterClassObject(CLSID_Klasa, (IUnknown *)f, CLSCTX_LOCAL_SERVER, REGCLS_MULTIPLEUSE, &id);
		printf("crco = %08X gle=%08X\n", rv, GetLastError());
		printf("\n");
		while(kbhit()) getch();
		Sleep(5000);
		//while(usageCount > 1 || !kbhit()) {
		while(usageCount > 1) {
			printf(".(%d)", usageCount);
			Sleep(1000);
			};
		f->Release();
		CoRevokeClassObject(id);
		};
	CoUninitialize();
	return 0;
	};
