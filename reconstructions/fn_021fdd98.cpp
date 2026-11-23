#include "botw/safe_string.h"

extern "C" unsigned char data_10050e0c[];
extern "C" unsigned char data_10050e14[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_021fdd98(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10050e0c;
        fn_030e9b44(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10050e14;
    }
    fn_030e9be0(self, (char*)self + 20, &key);
}
