#include "botw/safe_string.h"

extern "C" unsigned char data_1015fb00[];
extern "C" unsigned char data_1015faec[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

extern "C" void fn_02901e94(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015fb00;
        fn_030e9b44(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1015faec;
    }
    fn_030e9b44(self, (char*)self + 36, &key);
}
