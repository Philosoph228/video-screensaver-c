#if defined(__LCC__) || defined(__GNUC__)
#define INITGUID 1
#include <windows.h>
#else
#include <basetyps.h>
#endif

DEFINE_GUID(CLSID_EnhancedVideoRenderer, 0xfa10746c, 0x9b63, 0x4b6c, 0xbc,0x49,0xfc,0x30,0x0e,0xa5,0xf2,0x56);
DEFINE_GUID(IID_IMFGetService, 0xfa993888, 0x4383, 0x415a, 0xa9,0x30,0xdd,0x47,0x2a,0x8c,0xf6,0xf7);
DEFINE_GUID(IID_IMFVideoDisplayControl, 0xa490b1e4, 0xab84, 0x4d31, 0xa1,0xb2,0x18,0x1e,0x03,0xb1,0x07,0x7a);