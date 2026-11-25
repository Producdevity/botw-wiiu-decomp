#include "botw/safe_string.h"

extern "C" unsigned char data_100933f8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_0237a74c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100933f8;
    }
    fn_030e9ff4(self, (char*)self + 16, &key);
}
