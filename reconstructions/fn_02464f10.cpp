#include "botw/safe_string.h"

extern "C" unsigned char data_100bca4c[];
extern "C" unsigned char data_100bca5c[];
extern "C" unsigned char data_100bca6c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" void fn_030e9ff4(void *, void *, const SafeString *);
extern "C" void fn_02464f10(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100bca5c;
            key.string = (const char*)data_100bca4c;
            key_ref = &key;
            fn_030e9b44(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9b44(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bca6c;
    }
    last_ref = key_ref;
    fn_030e9ff4(self, (char*)self + 24, last_ref);
}
