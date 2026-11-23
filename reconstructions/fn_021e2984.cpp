#include "botw/safe_string.h"

extern "C" unsigned char data_1004ab68[];
extern "C" unsigned char data_1004ab70[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_021e2984(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004ab68;
        fn_030e9be0(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004ab70;
    }
    fn_030e9c7c(self, (char*)self + 20, &key);
}
