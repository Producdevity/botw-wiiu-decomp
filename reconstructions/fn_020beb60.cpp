#include "botw/safe_string.h"

extern "C" unsigned char data_100165e8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_020beb60(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100165e8;
    }
    fn_030e9ff4(self, (char*)self + 16, &key);
}
