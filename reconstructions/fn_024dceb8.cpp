#include "botw/safe_string.h"

extern "C" unsigned char data_100cb12c[];
extern "C" unsigned char data_100cb144[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_024db87c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_024dceb8(void* self) {
    SafeString key;
    if (true) {
        fn_024db87c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cb12c;
        fn_030e9be0(self, (char*)self + 144, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cb144;
    }
    fn_030e9be0(self, (char*)self + 148, &key);
}
