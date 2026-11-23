#include "botw/safe_string.h"

extern "C" unsigned char data_1017d98c[];
extern "C" unsigned char data_1017d99c[];
extern "C" unsigned char data_1017d9ac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff92c(void*, void*, void*);

extern "C" void fn_029c5e88(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_1017d99c;
            key.string = (const char*)data_1017d98c;
            key_ref = &key;
            fn_030ff7a8(self, (char*)self + 20, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030ff7a8(self, (char*)self + 24, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017d9ac;
    }
    last_ref = key_ref;
    fn_030ff92c(self, (char*)self + 28, last_ref);
}
