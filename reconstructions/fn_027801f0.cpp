#include "botw/safe_string.h"

extern "C" unsigned char data_1012b7cc[];
extern "C" unsigned char data_1012b7d8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02780ac4(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_027801f0(void* self) {
    SafeString key;
    if (true) {
        fn_02780ac4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012b7cc;
        fn_030e9be0(self, (char*)self + 620, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012b7d8;
    }
    fn_030e9be0(self, (char*)self + 624, &key);
}
