#include "botw/safe_string.h"

extern "C" unsigned char data_1019a1dc[];
extern "C" unsigned char data_1019a1e4[];
extern "C" unsigned char data_1019a1f4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" void fn_0314b1c8(void*, void*, void*);

extern "C" void fn_02a8b504(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1019a1e4;
            key.string = (const char*)data_1019a1dc;
            key_ref = &key;
            fn_0314b24c(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_0314b1c8(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1019a1f4;
    }
    last_ref = key_ref;
    fn_0314b1c8(self, (char*)self + 28, last_ref);
}
