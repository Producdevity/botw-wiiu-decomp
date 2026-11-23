#include "botw/safe_string.h"

extern "C" unsigned char data_101904b4[];
extern "C" unsigned char data_101904cc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b334(void*, void*, void*);
extern "C" void fn_0314b1c8(void*, void*, void*);

extern "C" void fn_02a61c98(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101904b4;
        fn_0314b334(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101904cc;
    }
    fn_0314b1c8(self, (char*)self + 20, &key);
}
