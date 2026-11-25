#include "botw/safe_string.h"

extern "C" void fn_030ea284(void*, void*, void*);
extern "C" unsigned char data_100c8460[];
extern "C" const unsigned char data_10263910;

extern "C" void fn_024c6278(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c8460;
    }
    fn_030ea284(self, (char*)self + 32, &key);
}
