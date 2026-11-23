#include "botw/safe_string.h"

extern "C" unsigned char data_10080584[];
extern "C" unsigned char data_1008057c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02306df8(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02308610(void* self) {
    SafeString key;
    if (true) {
        fn_02306df8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10080584;
        fn_030e9be0(self, (char*)self + 116, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008057c;
    }
    fn_030e9aa8(self, (char*)self + 120, &key);
}
