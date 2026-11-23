#include "botw/safe_string.h"

extern "C" unsigned char data_100c8f78[];
extern "C" unsigned char data_100c8f80[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02851b98(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_024cc0bc(void* self) {
    SafeString key;
    if (true) {
        fn_02851b98(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c8f78;
        fn_030e9be0(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c8f80;
    }
    fn_030e9aa8(self, (char*)self + 64, &key);
}
