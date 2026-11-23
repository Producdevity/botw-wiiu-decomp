#include "botw/safe_string.h"

extern "C" unsigned char data_10154194[];
extern "C" unsigned char data_101541a4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02594ef8(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_028a68b4(void* self) {
    SafeString key;
    if (true) {
        fn_02594ef8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10154194;
        fn_030e9be0(self, (char*)self + 188, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101541a4;
    }
    fn_030e9be0(self, (char*)self + 192, &key);
}
