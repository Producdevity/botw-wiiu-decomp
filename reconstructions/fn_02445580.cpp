#include "botw/safe_string.h"

extern "C" unsigned char data_100b6bdc[];
extern "C" unsigned char data_100b6be4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0242a698(void *arg0);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02445580(void* self) {
    SafeString key;
    if (true) {
        fn_0242a698(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6bdc;
        fn_030e9b44(self, (char*)self + 52, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6be4;
    }
    fn_030e9d18(self, (char*)self + 56, &key);
}
