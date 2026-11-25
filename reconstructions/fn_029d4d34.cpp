#include "botw/safe_string.h"

extern "C" void fn_030ff774(void*, void*, void*);
extern "C" unsigned char data_10180b2c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029d4d34(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180b2c;
    }
    fn_030ff774(self, (char*)self + 20, &key);
}
