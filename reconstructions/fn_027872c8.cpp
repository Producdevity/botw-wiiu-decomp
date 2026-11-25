#include "botw/safe_string.h"

extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" unsigned char data_1012c47c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_027872c8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012c47c;
    }
    fn_030ea0cc(self, (char*)self + 32, &key);
}
