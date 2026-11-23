#include "botw/safe_string.h"

extern "C" unsigned char data_10065444[];
extern "C" unsigned char data_1006543c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023e7dac(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_0225fcc4(void* self) {
    SafeString key;
    if (true) {
        fn_023e7dac(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10065444;
        fn_030e9aa8(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006543c;
    }
    fn_030e9aa8(self, (char*)self + 32, &key);
}
