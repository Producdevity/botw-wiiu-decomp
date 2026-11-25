#include "botw/safe_string.h"

extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" unsigned char data_10057a84[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0221991c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10057a84;
    }
    fn_030e9b44(self, (char*)self + 16, &key);
}
