#include "botw/safe_string.h"

extern "C" unsigned char data_1032e188[];
extern "C" unsigned char data_1032e180[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_03894df4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1032e188;
        fn_030e9aa8(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1032e180;
    }
    fn_030e9d18(self, (char*)self + 40, &key);
}
