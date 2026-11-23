#include "botw/safe_string.h"

extern "C" unsigned char data_10134514[];
extern "C" unsigned char data_10134528[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025a1c34(void*);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

extern "C" void fn_027db008(void* self) {
    SafeString key;
    if (true) {
        fn_025a1c34(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134514;
        fn_030e9d18(self, (char*)self + 60, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10134528;
    }
    fn_030ea284(self, (char*)self + 64, &key);
}
