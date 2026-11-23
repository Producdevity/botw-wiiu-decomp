#include "botw/safe_string.h"

extern "C" unsigned char data_10046860[];
extern "C" unsigned char data_10046890[];
extern "C" unsigned char data_10046878[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" void fn_030ea1ac(void*, void*, void*);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_021d26d4(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10046890;
            key.string = (const char*)data_10046860;
            key_ref = &key;
            fn_030ea03c(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ea1ac(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046878;
    }
    last_ref = key_ref;
    fn_030ea23c(self, (char*)self + 24, last_ref);
}
