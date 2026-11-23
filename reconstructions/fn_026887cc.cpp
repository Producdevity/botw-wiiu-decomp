#include "botw/safe_string.h"

extern "C" unsigned char data_10109614[];
extern "C" unsigned char data_10109624[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_026887cc(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10109614;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10109624;
    }
    fn_030e9be0(self, (char*)self + 36, &key);
}
