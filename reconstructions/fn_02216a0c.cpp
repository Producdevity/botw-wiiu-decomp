#include "botw/safe_string.h"

extern "C" unsigned char data_10056d18[];
extern "C" unsigned char data_10056d10[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022177b4(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_02216a0c(void* self) {
    SafeString key;
    if (true) {
        fn_022177b4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10056d18;
        fn_030e9b44(self, (char*)self + 88, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10056d10;
    }
    fn_030e9b44(self, (char*)self + 92, &key);
}
