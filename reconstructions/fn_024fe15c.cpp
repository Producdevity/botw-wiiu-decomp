#include "botw/safe_string.h"

extern "C" unsigned char data_100d0b10[];
extern "C" unsigned char data_100d0b1c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02500a94(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_024fe15c(void* self) {
    SafeString key;
    if (true) {
        fn_02500a94(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d0b10;
        fn_030e9aa8(self, (char*)self + 556, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d0b1c;
    }
    fn_030e9aa8(self, (char*)self + 564, &key);
}
