#include "botw/safe_string.h"

extern "C" unsigned char data_101802b0[];
extern "C" unsigned char data_10180298[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029d4d34(void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029d30a0(void* self) {
    SafeString key;
    if (true) {
        fn_029d4d34(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101802b0;
        fn_030ff810(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180298;
    }
    fn_030ff810(self, (char*)self + 28, &key);
}
