#include "botw/safe_string.h"

extern "C" void fn_030ff774(void*, void*, void*);
extern "C" unsigned char data_1017931c[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029b06d0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017931c;
    }
    fn_030ff774(self, (char*)self + 20, &key);
}
