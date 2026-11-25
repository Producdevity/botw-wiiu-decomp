#include "botw/safe_string.h"

extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" unsigned char data_1001c080[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_020deda0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001c080;
    }
    fn_030e9b44(self, (char*)self + 28, &key);
}
