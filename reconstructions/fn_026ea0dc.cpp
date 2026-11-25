#include "botw/safe_string.h"

extern "C" unsigned char data_10117ea0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_026ea0dc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10117ea0;
    }
    fn_030e9ff4(self, (char*)self + 32, &key);
}
