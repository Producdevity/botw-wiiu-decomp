#include "botw/safe_string.h"

extern "C" void fn_030ea164(void*, void*, void*);
extern "C" unsigned char data_10123f2c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_027511d0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10123f2c;
    }
    fn_030ea164(self, (char*)self + 32, &key);
}
