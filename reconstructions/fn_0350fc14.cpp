#include "botw/safe_string.h"

extern "C" unsigned char data_102d43f8[];
extern "C" unsigned char data_102d43f0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_0350fc14(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_102d43f8;
        fn_030ea0cc(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_102d43f0;
    }
    fn_030e9fac(self, (char*)self + 36, &key);
}
