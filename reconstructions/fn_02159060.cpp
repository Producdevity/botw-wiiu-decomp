#include "botw/safe_string.h"

extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" unsigned char data_10030800[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02159060(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10030800;
    }
    fn_030e9be0(self, (char*)self + 16, &key);
}
