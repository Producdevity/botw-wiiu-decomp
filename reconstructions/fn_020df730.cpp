#include "botw/safe_string.h"

extern "C" unsigned char data_1001c324[];
extern "C" unsigned char data_1001c318[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_020df730(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001c324;
        fn_030e9ff4(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001c318;
    }
    fn_030e9fac(self, (char*)self + 20, &key);
}
