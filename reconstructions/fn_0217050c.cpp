#include "botw/safe_string.h"

extern "C" unsigned char data_10034f48[];
extern "C" unsigned char data_10034f3c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0217050c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10034f48;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10034f3c;
    }
    fn_030e9b44(self, (char*)self + 20, &key);
}
