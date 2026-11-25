#include "botw/safe_string.h"

extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" unsigned char data_1001e590[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_020f2374(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001e590;
    }
    fn_030e9b44(self, (char*)self + 16, &key);
}
