#include "botw/safe_string.h"

extern "C" unsigned char data_1017bc24[];
extern "C" unsigned char data_1017bc2c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

extern "C" void fn_029ba0a0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017bc24;
        fn_030ff774(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017bc2c;
    }
    fn_030ff810(self, (char*)self + 24, &key);
}
