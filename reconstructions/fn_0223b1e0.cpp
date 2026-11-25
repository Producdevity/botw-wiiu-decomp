#include "botw/safe_string.h"

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" unsigned char data_1005ea70[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0223b1e0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005ea70;
    }
    fn_030e9aa8(self, (char*)self + 16, &key);
}
