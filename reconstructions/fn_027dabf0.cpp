#include "botw/safe_string.h"

extern "C" unsigned char data_10134374[];
extern "C" unsigned char data_10134380[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

extern "C" void fn_027dabf0(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134374;
        fn_030e9d18(self, (char*)self + 128, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134380;
    }
    fn_030e9d18(self, (char*)self + 132, &key);
}
