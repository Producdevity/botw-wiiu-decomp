#include "botw/safe_string.h"

extern "C" unsigned char data_10132e94[];
extern "C" unsigned char data_10132ea8[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027c4c94(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

extern "C" void fn_027cfd24(void* self) {
    SafeString key;
    if (true) {
        fn_027c4c94(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10132e94;
        fn_030e9be0(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10132ea8;
    }
    fn_030e9be0(self, (char*)self + 80, &key);
}
