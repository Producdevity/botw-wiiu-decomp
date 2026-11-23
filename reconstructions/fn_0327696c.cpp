#include "botw/safe_string.h"

extern "C" unsigned char data_1029d6b4[];
extern "C" unsigned char data_1029d6a0[];
extern "C" unsigned char data_1029d6a8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void *, void *, const SafeString *);
extern "C" void fn_030e9fac(void*, void*, void*);

extern "C" void fn_0327696c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1029d6a0;
            key.string = (const char*)data_1029d6b4;
            key_ref = &key;
            fn_030e9ff4(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9fac(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1029d6a8;
    }
    last_ref = key_ref;
    fn_030e9fac(self, (char*)self + 44, last_ref);
}
