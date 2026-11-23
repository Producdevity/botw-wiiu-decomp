#include "botw/safe_string.h"

extern "C" unsigned char data_10197dd4[];
extern "C" unsigned char data_10197dfc[];
extern "C" unsigned char data_10197de8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b1c8(void*, void*, void*);

extern "C" void fn_02a8236c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10197dfc;
            key.string = (const char*)data_10197dd4;
            key_ref = &key;
            fn_0314b1c8(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_0314b1c8(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10197de8;
    }
    last_ref = key_ref;
    fn_0314b1c8(self, (char*)self + 32, last_ref);
}
