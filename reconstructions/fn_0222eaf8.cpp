#include "botw/safe_string.h"

extern "C" unsigned char data_1005c800[];
extern "C" unsigned char data_1005c818[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0222f33c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_0222eaf8(void* self) {
    SafeString key;
    if (true) {
        fn_0222f33c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005c800;
        fn_030e9be0(self, (char*)self + 140, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005c818;
    }
    fn_030e9be0(self, (char*)self + 144, &key);
}
