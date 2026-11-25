#include "botw/safe_string.h"

extern "C" void fn_030ff8e4(void*, void*, void*);
extern "C" unsigned char data_1017d128[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029c2e78(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017d128;
    }
    fn_030ff8e4(self, (char*)self + 20, &key);
}
