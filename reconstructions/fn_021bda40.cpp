#include "botw/safe_string.h"

extern "C" void fn_030ea23c(void*, void*, void*);
extern "C" unsigned char data_100427f4[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_021bda40(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100427f4;
    }
    fn_030ea23c(self, (char*)self + 16, &key);
}
