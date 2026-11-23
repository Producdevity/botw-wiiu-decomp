#include "botw/safe_string.h"

extern "C" unsigned char data_10067f70[];
extern "C" unsigned char data_10067f68[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0226d07c(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_0226d8e4(void* self) {
    SafeString key;
    if (true) {
        fn_0226d07c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10067f70;
        fn_030e9d18(self, (char*)self + 216, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10067f68;
    }
    fn_030e9aa8(self, (char*)self + 220, &key);
}
