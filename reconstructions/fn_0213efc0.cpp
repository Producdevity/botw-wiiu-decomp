#include "botw/safe_string.h"

extern "C" unsigned char data_1002b3e0[];
extern "C" unsigned char data_1002b3f0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02182104(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0213efc0(void* self) {
    SafeString key;
    if (true) {
        fn_02182104(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002b3e0;
        fn_030e9d18(self, (char*)self + 80, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002b3f0;
    }
    fn_030e9b44(self, (char*)self + 84, &key);
}
