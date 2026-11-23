#include "botw/safe_string.h"

extern "C" unsigned char data_1017a8fc[];
extern "C" unsigned char data_1017a8e0[];
extern "C" unsigned char data_1017a8f0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff740(void *, void *, const SafeString *);
extern "C" void fn_030ff7dc(void*, void*, void*);

extern "C" void fn_029b5de8(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1017a8e0;
            key.string = (const char*)data_1017a8fc;
            key_ref = &key;
            fn_030ff740(self, (char*)self + 20, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ff740(self, (char*)self + 28, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017a8f0;
    }
    last_ref = key_ref;
    fn_030ff7dc(self, (char*)self + 36, last_ref);
}
