#include "botw/safe_string.h"

extern "C" unsigned char data_10047710[];
extern "C" unsigned char data_1004772c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021d5a2c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_021d672c(void* self) {
    SafeString key;
    if (true) {
        fn_021d5a2c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10047710;
        fn_030e9be0(self, (char*)self + 148, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004772c;
    }
    fn_030e9d18(self, (char*)self + 152, &key);
}
