#include "botw/safe_string.h"

extern "C" unsigned char data_10108044[];
extern "C" unsigned char data_1010805c[];
extern "C" unsigned char data_10108028[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" void fn_030ea164(void*, void*, void*);

extern "C" void fn_0267db2c(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1010805c;
            key.string = (const char*)data_10108044;
            key_ref = &key;
            fn_030e9aa8(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9b44(self, (char*)self + 40, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10108028;
    }
    last_ref = key_ref;
    fn_030ea164(self, (char*)self + 44, last_ref);
}
