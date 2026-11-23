#include "botw/safe_string.h"

extern "C" unsigned char data_1016a85c[];
extern "C" unsigned char data_1016a864[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0295f99c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_02935b38(void* self) {
    SafeString key;
    if (true) {
        fn_0295f99c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016a85c;
        fn_030e9b44(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016a864;
    }
    fn_030e9b44(self, (char*)self + 64, &key);
}
