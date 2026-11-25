#include "botw/safe_string.h"

extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" unsigned char data_10171db4[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02973ea0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10171db4;
    }
    fn_030e9b44(self, (char*)self + 32, &key);
}
