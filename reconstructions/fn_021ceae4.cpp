#include "botw/safe_string.h"

extern "C" unsigned char data_10045af8[];
extern "C" unsigned char data_10045b04[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_021ceae4(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10045af8;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10045b04;
    }
    fn_030e9b44(self, (char*)self + 20, &key);
}
