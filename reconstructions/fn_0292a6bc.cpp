#include "botw/safe_string.h"

extern "C" unsigned char data_1016824c[];
extern "C" unsigned char data_10168254[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02919b40(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_0292a6bc(void* self) {
    SafeString key;
    if (true) {
        fn_02919b40(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016824c;
        fn_030e9be0(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10168254;
    }
    fn_030e9aa8(self, (char*)self + 40, &key);
}
