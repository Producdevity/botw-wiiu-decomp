#include "botw/safe_string.h"

extern "C" unsigned char data_10122a6c[];
extern "C" unsigned char data_10122a78[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02745a48(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02746e90(void* self) {
    SafeString key;
    if (true) {
        fn_02745a48(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10122a6c;
        fn_030e9b44(self, (char*)self + 64, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10122a78;
    }
    fn_030e9be0(self, (char*)self + 68, &key);
}
