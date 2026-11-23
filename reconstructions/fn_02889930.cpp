#include "botw/safe_string.h"

extern "C" unsigned char data_1014e254[];
extern "C" unsigned char data_1014e240[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025e83dc(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02889930(void* self) {
    SafeString key;
    if (true) {
        fn_025e83dc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014e254;
        fn_030e9be0(self, (char*)self + 304, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014e240;
    }
    fn_030e9be0(self, (char*)self + 308, &key);
}
