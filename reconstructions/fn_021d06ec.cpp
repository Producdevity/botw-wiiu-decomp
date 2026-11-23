#include "botw/safe_string.h"

extern "C" unsigned char data_10046004[];
extern "C" unsigned char data_10046014[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

extern "C" void fn_021d06ec(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046004;
        fn_030e9d18(self, (char*)self + 16, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10046014;
    }
    fn_030ea0cc(self, (char*)self + 20, &key);
}
