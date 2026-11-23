#include "botw/safe_string.h"

extern "C" unsigned char data_101ce1f0[];
extern "C" unsigned char data_101ce1fc[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02c89e48(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ce1f0;
        fn_030e9be0(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ce1fc;
    }
    fn_030e9be0(self, (char*)self + 24, &key);
}
