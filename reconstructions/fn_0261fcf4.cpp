#include "botw/safe_string.h"

extern "C" unsigned char data_100f8c88[];
extern "C" unsigned char data_100f8c94[];
extern "C" unsigned char data_100f8c80[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_0261fcf4(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100f8c94;
            key.string = (const char*)data_100f8c88;
            key_ref = &key;
            fn_030e9b44(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9b44(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f8c80;
    }
    last_ref = key_ref;
    fn_030e9be0(self, (char*)self + 40, last_ref);
}
