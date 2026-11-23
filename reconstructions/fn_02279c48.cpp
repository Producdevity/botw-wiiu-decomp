#include "botw/safe_string.h"

extern "C" unsigned char data_1006a71c[];
extern "C" unsigned char data_1006a724[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0226b3cc(void *arg0);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02279c48(void* self) {
    SafeString key;
    if (true) {
        fn_0226b3cc(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006a71c;
        fn_030e9b44(self, (char*)self + 108, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1006a724;
    }
    fn_030e9aa8(self, (char*)self + 112, &key);
}
