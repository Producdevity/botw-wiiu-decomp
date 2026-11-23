#include "botw/safe_string.h"

extern "C" unsigned char data_1008a980[];
extern "C" unsigned char data_1008a978[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_02344994(void* self) {
    SafeString key;
    if (true) {
        fn_023fea2c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008a980;
        fn_030e9d18(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008a978;
    }
    fn_030e9aa8(self, (char*)self + 28, &key);
}
