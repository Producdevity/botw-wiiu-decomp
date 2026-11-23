#include "botw/safe_string.h"

extern "C" unsigned char data_1012fd58[];
extern "C" unsigned char data_1012fd3c[];
extern "C" unsigned char data_1012fd48[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_027b00a4(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1012fd3c;
            key.string = (const char*)data_1012fd58;
            key_ref = &key;
            fn_030e9be0(self, (char*)self + 32, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9aa8(self, (char*)self + 36, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012fd48;
    }
    last_ref = key_ref;
    fn_030e9aa8(self, (char*)self + 44, last_ref);
}
