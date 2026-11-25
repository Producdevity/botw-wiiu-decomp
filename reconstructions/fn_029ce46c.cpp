#include "botw/safe_string.h"

extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" unsigned char data_1017f3a8[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029ce46c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f3a8;
    }
    fn_030ff7a8(self, (char*)self + 20, &key);
}
