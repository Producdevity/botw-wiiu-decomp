#include "botw/safe_string.h"

extern "C" unsigned char data_1017a760[];
extern "C" unsigned char data_1017a754[];
extern "C" unsigned char data_1017a76c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff810(void *, void *, const SafeString *);
extern "C" void fn_029b58e8(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1017a754;
            key.string = (const char*)data_1017a760;
            key_ref = &key;
            fn_030ff7a8(self, (char*)self + 20, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ff7a8(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017a76c;
    }
    last_ref = key_ref;
    fn_030ff810(self, (char*)self + 28, last_ref);
}
