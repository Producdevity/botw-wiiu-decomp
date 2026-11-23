#include "botw/safe_string.h"

extern "C" unsigned char data_100d2f24[];
extern "C" unsigned char data_100d2f14[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_0250bcdc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2f24;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2f14;
    }
    fn_030e9aa8(self, (char*)self + 36, &key);
}
