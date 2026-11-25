#include "botw/safe_string.h"

extern "C" unsigned char data_101c995c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02c698d0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101c995c;
    }
    fn_030e9be0(self, (char*)self + 20, &key);
}
