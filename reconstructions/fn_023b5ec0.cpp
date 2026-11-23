#include "botw/safe_string.h"

extern "C" unsigned char data_1009e8c8[];
extern "C" unsigned char data_1009e8d0[];
extern "C" unsigned char data_1009e8c0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_030e9ff4(void *, void *, const SafeString *);
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_023b5ec0(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1009e8d0;
            key.string = (const char*)data_1009e8c8;
            key_ref = &key;
            fn_030e9aa8(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9ff4(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009e8c0;
    }
    last_ref = key_ref;
    fn_030ea03c(self, (char*)self + 28, last_ref);
}
