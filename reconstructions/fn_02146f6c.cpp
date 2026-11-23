#include "botw/safe_string.h"

extern "C" unsigned char data_1002cc84[];
extern "C" unsigned char data_1002cca4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);

extern "C" void fn_02146f6c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002cc84;
        fn_030e9ff4(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002cca4;
    }
    fn_030e9ff4(self, (char*)self + 20, &key);
}
