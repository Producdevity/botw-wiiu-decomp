#include "botw/safe_string.h"

typedef int s32;

extern "C" void fn_029e48ec(void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" const unsigned char data_10263910;

extern "C" s32 data_1017cba0;

extern "C" void fn_029c07a0(void *object) {
    SafeString sp;

    fn_029e48ec(object);
    sp.vtable = &data_10263910;
    sp.string = (const char*)&data_1017cba0;
    fn_030ff740(object, (char *)object + 0x3C, &sp);
}
