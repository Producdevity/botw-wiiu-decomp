#include "botw/safe_string.h"

extern "C" unsigned char data_100ddd88[];
extern "C" unsigned char data_100ddd70[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_0255639c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ddd88;
        fn_030ea0cc(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ddd70;
    }
    fn_030ea284(self, (char*)self + 36, &key);
}
