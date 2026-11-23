#include "botw/safe_string.h"

extern "C" unsigned char data_100f24a4[];
extern "C" unsigned char data_100f24b8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02590840(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_025f41c0(void* self) {
    SafeString key;
    if (true) {
        fn_02590840(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f24a4;
        fn_030e9be0(self, (char*)self + 44, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f24b8;
    }
    fn_030e9be0(self, (char*)self + 48, &key);
}
