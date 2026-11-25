#include "botw/safe_string.h"

extern "C" void fn_030ff740(void*, void*, const SafeString*);
extern "C" unsigned char data_101806a4[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_029d3e54(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101806a4;
    }
    fn_030ff740(self, (char*)self + 20, &key);
}
