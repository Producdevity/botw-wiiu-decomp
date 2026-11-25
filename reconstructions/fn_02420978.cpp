#include "botw/safe_string.h"

extern "C" unsigned char data_100b0630[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_02420978(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b0630;
    }
    fn_030e9be0(self, (char*)self + 16, &key);
}
