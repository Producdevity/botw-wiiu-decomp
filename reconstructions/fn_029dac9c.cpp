#include "botw/safe_string.h"

extern "C" unsigned char data_101825e8[];
extern "C" unsigned char data_101825c8[];
extern "C" unsigned char data_101825f4[];
extern "C" unsigned char data_101825dc[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff774(void *, void *, void *);
extern "C" void fn_030ff810(void *, void *, const SafeString *);
extern "C" void fn_030ff740(void *, void *, const SafeString *);

extern "C" void fn_029dac9c(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            if (true) {
                key.vtable = &data_10263910;
                key.string = (const char*)data_101825e8;
                fn_030ff774(self, (char*)self + 20, &key);
                key.vtable = &data_10263910;
                key.string = (const char*)data_101825c8;
            }
            fn_030ff810(self, (char*)self + 24, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_101825f4;
        }
        fn_030ff810(self, (char*)self + 28, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101825e8;
        key.string = (const char*)data_101825dc;
    }
    fn_030ff740(self, (char*)self + 32, &key);
}
