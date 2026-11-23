#include "botw/safe_string.h"

extern "C" unsigned char data_100b65ec[];
extern "C" unsigned char data_100b65f4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02440ebc(void*, void*, void*);
extern "C" void fn_0244117c(void*, void*, void*);

extern "C" void fn_02443f24(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b65ec;
        fn_02440ebc(self, (char*)self + 12, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b65f4;
    }
    fn_0244117c(self, (char*)self + 16, &key);
}
