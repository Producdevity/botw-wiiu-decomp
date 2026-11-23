#include "botw/safe_string.h"

extern "C" unsigned char data_10080150[];
extern "C" unsigned char data_10080148[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02306df8(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02307ebc(void* self) {
    SafeString key;
    if (true) {
        fn_02306df8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10080150;
        fn_030e9d18(self, (char*)self + 116, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10080148;
    }
    fn_030e9aa8(self, (char*)self + 120, &key);
}
