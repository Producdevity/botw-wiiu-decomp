#include "botw/safe_string.h"

extern "C" unsigned char data_100b07a0[];
extern "C" unsigned char data_100b0798[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02421aa8(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02420d60(void* self) {
    SafeString key;
    if (true) {
        fn_02421aa8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b07a0;
        fn_030e9be0(self, (char*)self + 72, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b0798;
    }
    fn_030e9be0(self, (char*)self + 76, &key);
}
