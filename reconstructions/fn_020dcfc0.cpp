#include "botw/safe_string.h"

extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" unsigned char data_1001b8e4[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_020dcfc0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001b8e4;
    }
    fn_030e9ff4(self, (char*)self + 136, &key);
}
