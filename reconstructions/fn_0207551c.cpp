#include "botw/safe_string.h"

extern "C" unsigned char data_1000c9a0[];
extern "C" unsigned char data_1000c9bc[];
extern "C" unsigned char data_1000c9ac[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_0207551c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1000c9bc;
            key.string = (const char*)data_1000c9a0;
            key_ref = &key;
            fn_030e9aa8(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea03c(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000c9ac;
    }
    last_ref = key_ref;
    fn_030ea03c(self, (char*)self + 28, last_ref);
}
