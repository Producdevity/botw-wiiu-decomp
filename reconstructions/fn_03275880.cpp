#include "botw/safe_string.h"

extern "C" unsigned char data_1029d4f4[];
extern "C" unsigned char data_1029d504[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_03275880(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029d4f4;
        fn_030e9fac(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029d504;
    }
    fn_030e9fac(self, (char*)self + 40, &key);
}
