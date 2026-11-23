#include "botw/safe_string.h"

extern "C" unsigned char data_100eb018[];
extern "C" unsigned char data_100eb020[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_025ad620(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100eb018;
        fn_030e9be0(self, (char*)self + 32, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100eb020;
    }
    fn_030ea284(self, (char*)self + 36, &key);
}
