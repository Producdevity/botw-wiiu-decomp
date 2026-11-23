#include "botw/safe_string.h"

extern "C" unsigned char data_10019c44[];
extern "C" unsigned char data_10019c54[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02100b60(void *arg0);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_020d2678(void* self) {
    SafeString key;
    if (true) {
        fn_02100b60(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019c44;
        fn_030e9be0(self, (char*)self + 144, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10019c54;
    }
    fn_030e9be0(self, (char*)self + 148, &key);
}
