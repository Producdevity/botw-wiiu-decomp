#include "botw/safe_string.h"

extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" unsigned char data_10092a4c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_02375d64(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10092a4c;
    }
    fn_030e9be0(self, (char*)self + 16, &key);
}
