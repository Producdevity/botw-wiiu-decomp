#include "botw/safe_string.h"

extern "C" unsigned char data_1002c08c[];
extern "C" unsigned char data_1002c09c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" void fn_030ea164(void*, void*, void*);

extern "C" void fn_02144120(void* self) {
    SafeString key;
    if (true) {
        fn_0221da1c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002c08c;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1002c09c;
    }
    fn_030ea164(self, (char*)self + 28, &key);
}
