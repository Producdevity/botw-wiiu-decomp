#include "botw/safe_string.h"

extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" unsigned char data_1000e518[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0207dcf8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000e518;
    }
    fn_030e9d18(self, (char*)self + 16, &key);
}
