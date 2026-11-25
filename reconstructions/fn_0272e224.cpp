#include "botw/safe_string.h"

extern "C" unsigned char data_1011f4ec[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_0272e224(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1011f4ec;
    }
    fn_030e9d18(self, (char*)self + 32, &key);
}
