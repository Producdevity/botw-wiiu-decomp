#include "botw/safe_string.h"

extern "C" unsigned char data_1004ae98[];
extern "C" unsigned char data_1004aea0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_021e3498(void* self) {
    SafeString key;
    if (true) {
        fn_0221da1c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004ae98;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004aea0;
    }
    fn_030ea284(self, (char*)self + 28, &key);
}
