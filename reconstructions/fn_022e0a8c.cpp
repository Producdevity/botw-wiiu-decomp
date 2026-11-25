#include "botw/safe_string.h"

extern "C" unsigned char data_10078d20[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_022e0a8c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10078d20;
    }
    fn_030e9be0(self, (char*)self + 16, &key);
}
