#include "botw/safe_string.h"

extern "C" unsigned char data_101464c8[];
extern "C" unsigned char data_101464d0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028508e0(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02851b98(void* self) {
    SafeString key;
    if (true) {
        fn_028508e0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101464c8;
        fn_030e9be0(self, (char*)self + 48, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101464d0;
    }
    fn_030e9be0(self, (char*)self + 52, &key);
}
