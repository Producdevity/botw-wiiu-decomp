#include "botw/safe_string.h"

extern "C" unsigned char data_100765f4[];
extern "C" unsigned char data_10076600[];
extern "C" unsigned char data_10076610[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_022cb95c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10076600;
            key.string = (const char*)data_100765f4;
            key_ref = &key;
            fn_030e9be0(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9be0(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10076610;
    }
    last_ref = key_ref;
    fn_030ea0cc(self, (char*)self + 24, last_ref);
}
