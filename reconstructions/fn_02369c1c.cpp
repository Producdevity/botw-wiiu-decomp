#include "botw/safe_string.h"

extern "C" unsigned char data_10090ad0[];
extern "C" unsigned char data_10090ad8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02369c1c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10090ad0;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10090ad8;
    }
    fn_030e9aa8(self, (char*)self + 20, &key);
}
