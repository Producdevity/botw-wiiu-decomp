#include "botw/safe_string.h"

extern "C" void fn_030e9fac(void*, void*, void*);
extern "C" unsigned char data_10103f38[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02665a30(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10103f38;
    }
    fn_030e9fac(self, (char*)self + 32, &key);
}
