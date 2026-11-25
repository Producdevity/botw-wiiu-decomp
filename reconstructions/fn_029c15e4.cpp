#include "botw/safe_string.h"

extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" unsigned char data_1017ce68[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029c15e4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017ce68;
    }
    fn_030ff740(self, (char*)self + 20, &key);
}
