#include "botw/safe_string.h"

extern "C" unsigned char data_100a4310[];
extern "C" unsigned char data_100a4308[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_023d9790(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a4310;
        fn_030e9d18(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a4308;
    }
    fn_030e9aa8(self, (char*)self + 20, &key);
}
