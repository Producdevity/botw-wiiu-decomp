#include "botw/safe_string.h"

extern "C" unsigned char data_1015c588[];
extern "C" unsigned char data_1015c578[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025964c4(void*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_028eaa14(void* self) {
    SafeString key;
    if (true) {
        fn_025964c4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015c588;
        fn_030e9aa8(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015c578;
    }
    fn_030e9aa8(self, (char*)self + 84, &key);
}
