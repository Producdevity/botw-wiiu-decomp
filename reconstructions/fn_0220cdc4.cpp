#include "botw/safe_string.h"

extern "C" unsigned char data_10054204[];
extern "C" unsigned char data_100541e4[];
extern "C" unsigned char data_100541ec[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0220cdc4(void* self) {
    SafeString* key_ref;
    const char* name;
    SafeString key;
    const char* next_name;
    SafeString* last_ref;
    if (true) {
        if (true) {
            key.vtable = &data_10263910;
            next_name = (const char*)data_100541e4;
            key.string = (const char*)data_10054204;
            key_ref = &key;
            fn_030e9b44(self, (char*)self + 16, key_ref);
            key.vtable = &data_10263910;
            name = next_name;
            key_ref->string = name;
        }
        fn_030e9aa8(self, (char*)self + 20, key_ref);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100541ec;
    }
    last_ref = key_ref;
    fn_030ea284(self, (char*)self + 28, last_ref);
}
