#include "botw/safe_string.h"

extern "C" unsigned char data_10140880[];
extern "C" unsigned char data_10140890[];
extern "C" unsigned char data_101408a4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0282f4f0(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10140890;
            key.string = (const char*)data_10140880;
            key_ref = &key;
            fn_030e9b44(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9be0(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101408a4;
    }
    last_ref = key_ref;
    fn_030ea284(self, (char*)self + 40, last_ref);
}
