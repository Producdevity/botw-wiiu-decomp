#include "botw/safe_string.h"

extern "C" unsigned char data_10014f40[];
extern "C" unsigned char data_10014f50[];
extern "C" unsigned char data_10014f48[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void *, void *, const SafeString *);
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_020b43ec(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10014f50;
            key.string = (const char*)data_10014f40;
            key_ref = &key;
            fn_030e9ff4(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9fac(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10014f48;
    }
    last_ref = key_ref;
    fn_030e9fac(self, (char*)self + 28, last_ref);
}
