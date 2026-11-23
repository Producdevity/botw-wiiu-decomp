#include "botw/safe_string.h"

extern "C" unsigned char data_100b3708[];
extern "C" unsigned char data_100b371c[];
extern "C" unsigned char data_100b36f4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" void fn_030ea11c(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0242ee00(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100b371c;
            key.string = (const char*)data_100b3708;
            key_ref = &key;
            fn_030ea23c(self, (char*)self + 36, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea11c(self, (char*)self + 40, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b36f4;
    }
    last_ref = key_ref;
    fn_030ea284(self, (char*)self + 44, last_ref);
}
