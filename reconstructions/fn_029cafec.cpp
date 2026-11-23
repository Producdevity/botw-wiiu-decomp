#include "botw/safe_string.h"

typedef int s32;

extern "C" void fn_029caa70(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1017eb30;

extern "C" void fn_029cafec(void *arg0) {
    SafeString sp;

    fn_029caa70(arg0);
    sp.vtable = &data_10263910;
    sp.string = (const char*)&data_1017eb30;
    fn_030ff740(arg0, (char *)arg0 + 0x20, &sp);
}
