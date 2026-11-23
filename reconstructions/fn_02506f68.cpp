#include "botw/safe_string.h"

extern "C" unsigned char data_100d2150[];
extern "C" unsigned char data_100d2140[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025063e4(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02506f68(void* self) {
    SafeString key;
    if (true) {
        fn_025063e4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2150;
        fn_030e9aa8(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100d2140;
    }
    fn_030e9aa8(self, (char*)self + 68, &key);
}
