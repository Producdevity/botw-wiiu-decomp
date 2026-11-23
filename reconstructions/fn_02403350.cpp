#include "botw/safe_string.h"

extern "C" unsigned char data_100aab64[];
extern "C" unsigned char data_100aab54[];
extern "C" unsigned char data_100aab4c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_02403350(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100aab54;
            key.string = (const char*)data_100aab64;
            key_ref = &key;
            fn_030e9aa8(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9aa8(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aab4c;
    }
    last_ref = key_ref;
    fn_030e9aa8(self, (char*)self + 32, last_ref);
}
