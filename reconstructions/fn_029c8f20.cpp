#include "botw/safe_string.h"

extern "C" unsigned char data_1017e204[];
extern "C" unsigned char data_1017e214[];
extern "C" unsigned char data_1017e224[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_029c91a4(void *);
extern "C" void fn_030ff774(void *, void *, void *);
extern "C" void fn_030ff7a8(void *, void *, void *);

extern "C" void fn_029c8f20(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_029c91a4(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1017e204;
            fn_030ff774(self, (char*)self + 32, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1017e214;
        }
        fn_030ff7a8(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017e204;
        key.string = (const char*)data_1017e224;
    }
    fn_030ff7a8(self, (char*)self + 40, &key);
}
