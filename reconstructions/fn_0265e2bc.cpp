#include "botw/safe_string.h"

extern "C" unsigned char data_10102d74[];
extern "C" unsigned char data_10102d8c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_0265e2bc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10102d74;
        fn_030e9aa8(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10102d8c;
    }
    fn_030e9aa8(self, (char*)self + 40, &key);
}
