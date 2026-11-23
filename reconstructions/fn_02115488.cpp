#include "botw/safe_string.h"

extern "C" unsigned char data_10025414[];
extern "C" unsigned char data_10025424[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_02115488(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10025414;
        fn_030e9fac(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10025424;
    }
    fn_030e9fac(self, (char*)self + 24, &key);
}
