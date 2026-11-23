#include "botw/safe_string.h"

extern "C" unsigned char data_1009f168[];
extern "C" unsigned char data_1009f15c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023b655c(void *arg0);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_023b8a20(void* self) {
    SafeString key;
    if (true) {
        fn_023b655c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009f168;
        fn_030e9d18(self, (char*)self + 148, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009f15c;
    }
    fn_030e9aa8(self, (char*)self + 152, &key);
}
