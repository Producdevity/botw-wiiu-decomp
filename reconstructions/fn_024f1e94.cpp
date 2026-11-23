#include "botw/safe_string.h"

extern "C" unsigned char data_100ce79c[];
extern "C" unsigned char data_100ce7a8[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);

extern "C" void fn_024f1e94(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce79c;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100ce7a8;
    }
    fn_030e9aa8(self, (char*)self + 36, &key);
}
