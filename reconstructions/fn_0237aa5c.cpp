#include "botw/safe_string.h"

extern "C" unsigned char data_1009355c[];
extern "C" unsigned char data_10093568[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021ccea8(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0237aa5c(void* self) {
    SafeString key;
    if (true) {
        fn_021ccea8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009355c;
        fn_030e9b44(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10093568;
    }
    fn_030e9b44(self, (char*)self + 80, &key);
}
