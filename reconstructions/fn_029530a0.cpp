#include "botw/safe_string.h"

extern "C" unsigned char data_1016d650[];
extern "C" unsigned char data_1016d648[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0339bd70(void *);
extern "C" void fn_0339bd18(void*, void*);

extern "C" void fn_029530a0(void* self) {
    SafeString key;
    if (true) {
        fn_0339bd70(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016d650;
        fn_0339bd18(self, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1016d648;
    }
    fn_0339bd18(self, &key);
}
