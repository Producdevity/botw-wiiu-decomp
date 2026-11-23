#include "botw/safe_string.h"

extern "C" unsigned char data_10112f4c[];
extern "C" unsigned char data_10112f60[];
extern "C" unsigned char data_10112f74[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_026cf974(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10112f60;
            key.string = (const char*)data_10112f4c;
            key_ref = &key;
            fn_030e9be0(self, (char*)self + 52, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9be0(self, (char*)self + 56, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10112f74;
    }
    last_ref = key_ref;
    fn_030e9be0(self, (char*)self + 60, last_ref);
}
