#include "botw/safe_string.h"

extern "C" unsigned char data_10179f78[];
extern "C" unsigned char data_10179f5c[];
extern "C" unsigned char data_10179f6c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff740(void *, void *, const SafeString *);
extern "C" void fn_030ff7dc(void*, void*, void*);

extern "C" void fn_029b3cdc(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10179f5c;
            key.string = (const char*)data_10179f78;
            key_ref = &key;
            fn_030ff740(self, (char*)self + 20, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ff740(self, (char*)self + 28, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10179f6c;
    }
    last_ref = key_ref;
    fn_030ff7dc(self, (char*)self + 36, last_ref);
}
