#include "botw/safe_string.h"

extern "C" unsigned char data_10151344[];
extern "C" unsigned char data_10151328[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028986c0(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02897efc(void* self) {
    SafeString key;
    if (true) {
        fn_028986c0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10151344;
        fn_030e9aa8(self, (char*)self + 48, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10151328;
    }
    fn_030e9d18(self, (char*)self + 44, &key);
}
