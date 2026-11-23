#include "botw/safe_string.h"

extern "C" unsigned char data_10141918[];
extern "C" unsigned char data_10141904[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02830000(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_028354c8(void* self) {
    SafeString key;
    if (true) {
        fn_02830000(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10141918;
        fn_030e9be0(self, (char*)self + 44, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10141904;
    }
    fn_030e9be0(self, (char*)self + 48, &key);
}
