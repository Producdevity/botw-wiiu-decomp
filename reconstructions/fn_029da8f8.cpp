#include "botw/safe_string.h"

extern "C" unsigned char data_101824b4[];
extern "C" unsigned char data_101824ac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff7a8(void*, void*, void*);

extern "C" void fn_029da8f8(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_101824b4;
        fn_030ff774(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101824ac;
    }
    fn_030ff7a8(self, (char*)self + 24, &key);
}
