#include "botw/safe_string.h"

extern "C" unsigned char data_100b279c[];
extern "C" unsigned char data_100b27a4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0229ccac(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0242ab18(void* self) {
    SafeString key;
    if (true) {
        fn_0229ccac(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b279c;
        fn_030e9b44(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b27a4;
    }
    fn_030e9b44(self, (char*)self + 44, &key);
}
