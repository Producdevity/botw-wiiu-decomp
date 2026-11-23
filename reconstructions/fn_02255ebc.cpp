#include "botw/safe_string.h"

extern "C" unsigned char data_10062d9c[];
extern "C" unsigned char data_10062db4[];
extern "C" unsigned char data_10062da4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_030e9c7c(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_02255ebc(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10062db4;
            key.string = (const char*)data_10062d9c;
            key_ref = &key;
            fn_030e9aa8(self, (char*)self + 24, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9c7c(self, (char*)self + 32, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10062da4;
    }
    last_ref = key_ref;
    fn_030ea284(self, (char*)self + 236, last_ref);
}
