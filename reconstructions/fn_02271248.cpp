#include "botw/safe_string.h"

extern "C" unsigned char data_10068ca4[];
extern "C" unsigned char data_10068cac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02306df8(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02271248(void* self) {
    SafeString key;
    if (true) {
        fn_02306df8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068ca4;
        fn_030e9b44(self, (char*)self + 116, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10068cac;
    }
    fn_030e9aa8(self, (char*)self + 120, &key);
}
