#include "botw/safe_string.h"

extern "C" unsigned char data_1008a670[];
extern "C" unsigned char data_1008a668[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022a02ac(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02343f70(void* self) {
    SafeString key;
    if (true) {
        fn_022a02ac(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008a670;
        fn_030e9d18(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008a668;
    }
    fn_030e9aa8(self, (char*)self + 44, &key);
}
