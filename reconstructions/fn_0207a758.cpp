#include "botw/safe_string.h"

extern "C" unsigned char data_1000da24[];
extern "C" unsigned char data_1000da2c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021cffb4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0207a758(void* self) {
    SafeString key;
    if (true) {
        fn_021cffb4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000da24;
        fn_030e9b44(self, (char*)self + 72, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1000da2c;
    }
    fn_030e9b44(self, (char*)self + 76, &key);
}
