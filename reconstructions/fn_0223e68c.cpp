#include "botw/safe_string.h"

extern "C" unsigned char data_1005f470[];
extern "C" unsigned char data_1005f480[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_021eb0e8(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea164(void*, void*, void*);

extern "C" void fn_0223e68c(void* self) {
    SafeString key;
    if (true) {
        fn_021eb0e8(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005f470;
        fn_030e9d18(self, (char*)self + 40, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1005f480;
    }
    fn_030ea164(self, (char*)self + 44, &key);
}
