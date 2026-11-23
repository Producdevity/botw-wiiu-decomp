#include "botw/safe_string.h"

extern "C" unsigned char data_100f71d0[];
extern "C" unsigned char data_100f71c4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_02615570(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f71d0;
        fn_030e9fac(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f71c4;
    }
    fn_030e9fac(self, (char*)self + 40, &key);
}
