#include "botw/safe_string.h"

extern "C" unsigned char data_1001d63c[];
extern "C" unsigned char data_1001d634[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_020eb244(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_020eb618(void* self) {
    SafeString key;
    if (true) {
        fn_020eb244(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001d63c;
        fn_030e9d18(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1001d634;
    }
    fn_030e9c7c(self, (char*)self + 80, &key);
}
