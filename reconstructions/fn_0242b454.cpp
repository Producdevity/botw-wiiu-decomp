#include "botw/safe_string.h"

extern "C" unsigned char data_100b2ae4[];
extern "C" unsigned char data_100b2aec[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02362a5c(void*);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_0242b454(void* self) {
    SafeString key;
    if (true) {
        fn_02362a5c(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b2ae4;
        fn_030e9b44(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b2aec;
    }
    fn_030e9b44(self, (char*)self + 100, &key);
}
