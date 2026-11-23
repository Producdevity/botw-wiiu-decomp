#include "botw/safe_string.h"

extern "C" unsigned char data_1013a3a8[];
extern "C" unsigned char data_1013a3bc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025e83dc(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0280068c(void* self) {
    SafeString key;
    if (true) {
        fn_025e83dc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013a3a8;
        fn_030e9d18(self, (char*)self + 304, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1013a3bc;
    }
    fn_030ea284(self, (char*)self + 308, &key);
}
