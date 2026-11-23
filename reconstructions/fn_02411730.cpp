#include "botw/safe_string.h"

extern "C" unsigned char data_100ad600[];
extern "C" unsigned char data_100ad5f8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02410df0(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02411730(void* self) {
    SafeString key;
    if (true) {
        fn_02410df0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ad600;
        fn_030e9d18(self, (char*)self + 156, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ad5f8;
    }
    fn_030e9aa8(self, (char*)self + 160, &key);
}
