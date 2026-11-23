#include "botw/safe_string.h"

extern "C" unsigned char data_10055d3c[];
extern "C" unsigned char data_10055d48[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_02213010(void* self) {
    SafeString key;
    if (true) {
        fn_0221da1c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055d3c;
        fn_030e9d18(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10055d48;
    }
    fn_030e9d18(self, (char*)self + 28, &key);
}
