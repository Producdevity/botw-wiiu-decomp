#include "botw/safe_string.h"

extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" unsigned char data_1016be50[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_0293f6a0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016be50;
    }
    fn_030ea23c(self, (char*)self + 32, &key);
}
