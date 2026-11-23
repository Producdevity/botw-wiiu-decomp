#include "botw/safe_string.h"

extern "C" unsigned char data_100e52b8[];
extern "C" unsigned char data_100e52c0[];
extern "C" unsigned char data_100e52d8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);

extern "C" void fn_0258416c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100e52c0;
            key.string = (const char*)data_100e52b8;
            key_ref = &key;
            fn_030ea03c(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea03c(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100e52d8;
    }
    last_ref = key_ref;
    fn_030ea03c(self, (char*)self + 40, last_ref);
}
