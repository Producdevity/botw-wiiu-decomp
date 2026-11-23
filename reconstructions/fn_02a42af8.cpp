#include "botw/safe_string.h"

extern "C" unsigned char data_10189d90[];
extern "C" unsigned char data_10189d7c[];
extern "C" unsigned char data_10189d9c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b24c(void*, void*, void*);
extern "C" void fn_0314b334(void*, void*, void*);

extern "C" void fn_02a42af8(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10189d7c;
            key.string = (const char*)data_10189d90;
            key_ref = &key;
            fn_0314b24c(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_0314b334(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10189d9c;
    }
    last_ref = key_ref;
    fn_0314b334(self, (char*)self + 24, last_ref);
}
