#include "botw/safe_string.h"

extern "C" unsigned char data_10150f74[];
extern "C" unsigned char data_10150f60[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0289783c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_02897000(void* self) {
    SafeString key;
    if (true) {
        fn_0289783c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10150f74;
        fn_030e9b44(self, (char*)self + 72, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10150f60;
    }
    fn_030e9b44(self, (char*)self + 76, &key);
}
