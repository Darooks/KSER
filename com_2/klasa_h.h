

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Mar 10 17:19:07 2016
 */
/* Compiler settings for ..\KSR_LAB1\comm\klasa.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __klasa_h_h__
#define __klasa_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKlasa_FWD_DEFINED__
#define __IKlasa_FWD_DEFINED__
typedef interface IKlasa IKlasa;
#endif 	/* __IKlasa_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IKlasa_INTERFACE_DEFINED__
#define __IKlasa_INTERFACE_DEFINED__

/* interface IKlasa */
/* [uuid][object] */ 


EXTERN_C const IID IID_IKlasa;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("17C11AFB-8892-4E9E-95C7-DF73A9D54D24")
    IKlasa : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Push( 
            /* [in] */ int val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PopEx( 
            /* [out] */ int *val) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IKlasaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKlasa * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKlasa * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKlasa * This);
        
        HRESULT ( STDMETHODCALLTYPE *Push )( 
            IKlasa * This,
            /* [in] */ int val);
        
        HRESULT ( STDMETHODCALLTYPE *PopEx )( 
            IKlasa * This,
            /* [out] */ int *val);
        
        END_INTERFACE
    } IKlasaVtbl;

    interface IKlasa
    {
        CONST_VTBL struct IKlasaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKlasa_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKlasa_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKlasa_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKlasa_Push(This,val)	\
    ( (This)->lpVtbl -> Push(This,val) ) 

#define IKlasa_PopEx(This,val)	\
    ( (This)->lpVtbl -> PopEx(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKlasa_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


