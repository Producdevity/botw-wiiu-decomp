#include "botw/safe_string.h"

extern "C" void fn_030ff92c(void*, void*, void*);
extern "C" unsigned char data_10182870[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029dbaa8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10182870;
    }
    fn_030ff92c(self, (char*)self + 20, &key);
}
