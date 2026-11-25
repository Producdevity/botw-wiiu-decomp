#include "botw/safe_string.h"

extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" unsigned char data_10163c44[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0291618c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10163c44;
    }
    fn_030ea03c(self, (char*)self + 32, &key);
}
