#include "botw/safe_string.h"

extern "C" unsigned char data_10170cd8[];
extern "C" unsigned char data_10170cc0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

extern "C" void fn_0296f770(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10170cd8;
        fn_030e9d18(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10170cc0;
    }
    fn_030ea23c(self, (char*)self + 36, &key);
}
