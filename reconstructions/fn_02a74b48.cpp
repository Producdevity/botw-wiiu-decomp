#include "botw/safe_string.h"

extern "C" void fn_0314b2c0(void*, void*, void*);
extern "C" unsigned char data_101947ac[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02a74b48(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101947ac;
    }
    fn_0314b2c0(self, (char*)self + 16, &key);
}
