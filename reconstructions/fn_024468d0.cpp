#include "botw/safe_string.h"

extern "C" unsigned char data_100b7078[];
extern "C" unsigned char data_100b7080[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_024468d0(void* self) {
    SafeString key;
    if (true) {
        fn_023fea2c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b7078;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b7080;
    }
    fn_030e9b44(self, (char*)self + 28, &key);
}
