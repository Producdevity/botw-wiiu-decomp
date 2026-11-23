#include "botw/safe_string.h"

extern "C" unsigned char data_10183ca4[];
extern "C" unsigned char data_10183cac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);

extern "C" void fn_029e1dcc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10183ca4;
        fn_030ff774(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10183cac;
    }
    fn_030ff774(self, (char*)self + 24, &key);
}
