#include "botw/safe_string.h"

extern "C" unsigned char data_101284d4[];
extern "C" unsigned char data_101284b0[];
extern "C" unsigned char data_101284c0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030ea164(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_02767c58(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_101284b0;
            key.string = (const char*)data_101284d4;
            key_ref = &key;
            fn_030e9be0(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea164(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101284c0;
    }
    last_ref = key_ref;
    fn_030ea23c(self, (char*)self + 40, last_ref);
}
