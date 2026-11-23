#include "botw/safe_string.h"

extern "C" unsigned char data_1004fcbc[];
extern "C" unsigned char data_1004fcc8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02216ff0(void *arg0);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_021f9b5c(void* self) {
    SafeString key;
    if (true) {
        fn_02216ff0(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004fcbc;
        fn_030e9b44(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004fcc8;
    }
    fn_030e9be0(self, (char*)self + 100, &key);
}
