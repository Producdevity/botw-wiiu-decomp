#include "botw/safe_string.h"

extern "C" unsigned char data_10182764[];
extern "C" unsigned char data_10182758[];
extern "C" unsigned char data_10182770[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff810(void *, void *, const SafeString *);
extern "C" void fn_029db5b4(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_10182758;
            key.string = (const char*)data_10182764;
            key_ref = &key;
            fn_030ff774(self, (char*)self + 20, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ff810(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182770;
    }
    last_ref = key_ref;
    fn_030ff810(self, (char*)self + 28, last_ref);
}
