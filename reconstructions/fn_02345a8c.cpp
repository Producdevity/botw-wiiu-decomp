#include "botw/safe_string.h"

extern "C" unsigned char data_1008af4c[];
extern "C" unsigned char data_1008af44[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0245f138(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02345a8c(void* self) {
    SafeString key;
    if (true) {
        fn_0245f138(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008af4c;
        fn_030e9d18(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008af44;
    }
    fn_030e9aa8(self, (char*)self + 64, &key);
}
