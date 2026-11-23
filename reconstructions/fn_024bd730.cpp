#include "botw/safe_string.h"

extern "C" unsigned char data_100c6930[];
extern "C" unsigned char data_100c6938[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_024bd730(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c6930;
        fn_030e9d18(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100c6938;
    }
    fn_030e9d18(self, (char*)self + 36, &key);
}
