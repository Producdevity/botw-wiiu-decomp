#include "botw/safe_string.h"

extern "C" unsigned char data_1015dc64[];
extern "C" unsigned char data_1015dc4c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_028e85b4(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_028f64e0(void* self) {
    SafeString key;
    if (true) {
        fn_028e85b4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015dc64;
        fn_030e9d18(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015dc4c;
    }
    fn_030e9d18(self, (char*)self + 64, &key);
}
