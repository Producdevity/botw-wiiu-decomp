#include "botw/safe_string.h"

extern "C" bool fn_030e9aa8(const void *, void *, const void *);
extern "C" unsigned char data_100f4190[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_025fe054(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f4190;
    }
    fn_030e9aa8(self, (char*)self + 32, &key);
}
