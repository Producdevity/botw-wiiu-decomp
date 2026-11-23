#include "botw/safe_string.h"

extern "C" unsigned char data_10146700[];
extern "C" unsigned char data_1014670c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0285267c(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10146700;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014670c;
    }
    fn_030e9b44(self, (char*)self + 36, &key);
}
