#include "botw/safe_string.h"

extern "C" unsigned char data_100dfcf0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02560d40(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100dfcf0;
    }
    fn_030e9d18(self, (char*)self + 32, &key);
}
