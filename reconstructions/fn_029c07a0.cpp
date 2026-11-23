#include "botw/safe_string.h"

typedef int s32;

extern "C" void fn_029e48ec(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1017cba0;

extern "C" void fn_029c07a0(void *arg0) {
    SafeString sp;

    fn_029e48ec(arg0);
    sp.vtable = &data_10263910;
    sp.string = (const char*)&data_1017cba0;
    fn_030ff740(arg0, (char *)arg0 + 0x3C, &sp);
}
