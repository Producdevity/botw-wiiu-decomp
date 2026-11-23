#include "botw/safe_string.h"

extern "C" unsigned char data_100aa6e4[];
extern "C" unsigned char data_100aa6f4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02401e04(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aa6e4;
        fn_030e9be0(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100aa6f4;
    }
    fn_030e9be0(self, (char*)self + 20, &key);
}
