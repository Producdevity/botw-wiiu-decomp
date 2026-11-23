#include "botw/safe_string.h"

extern "C" unsigned char data_100bdec0[];
extern "C" unsigned char data_100bded0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022a0ee4(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_0246c244(void* self) {
    SafeString key;
    if (true) {
        fn_022a0ee4(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bdec0;
        fn_030e9d18(self, (char*)self + 116, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100bded0;
    }
    fn_030e9d18(self, (char*)self + 120, &key);
}
