#include "botw/safe_string.h"

extern "C" unsigned char data_100a2c34[];
extern "C" unsigned char data_100a2c44[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_023c5f48(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_023cec3c(void* self) {
    SafeString key;
    if (true) {
        fn_023c5f48(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a2c34;
        fn_030e9be0(self, (char*)self + 276, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100a2c44;
    }
    fn_030e9be0(self, (char*)self + 280, &key);
}
