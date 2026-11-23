#include "botw/safe_string.h"

extern "C" unsigned char data_100986b4[];
extern "C" unsigned char data_100986ac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023fea2c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02398fec(void* self) {
    SafeString key;
    if (true) {
        fn_023fea2c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100986b4;
        fn_030e9b44(self, (char*)self + 24, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100986ac;
    }
    fn_030e9be0(self, (char*)self + 28, &key);
}
