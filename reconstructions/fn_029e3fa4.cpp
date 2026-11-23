#include "botw/safe_string.h"

extern "C" unsigned char data_101842cc[];
extern "C" unsigned char data_101842d4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029ccb88(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

extern "C" void fn_029e3fa4(void* self) {
    SafeString key;
    if (true) {
        fn_029ccb88(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101842cc;
        fn_030ff774(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101842d4;
    }
    fn_030ff740(self, (char*)self + 64, &key);
}
