#include "botw/safe_string.h"

extern "C" unsigned char data_100f62e8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_0260abf4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f62e8;
    }
    fn_030e9d18(self, (char*)self + 32, &key);
}
