#include "botw/safe_string.h"

extern "C" unsigned char data_10046bdc[];
extern "C" unsigned char data_10046be4[];
extern "C" unsigned char data_10046bec[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" void fn_021d3ecc(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10046be4;
            key.string = (const char*)data_10046bdc;
            key_ref = &key;
            fn_030e9be0(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9be0(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046bec;
    }
    last_ref = key_ref;
    fn_030e9d18(self, (char*)self + 24, last_ref);
}
