#include "botw/safe_string.h"

extern "C" unsigned char data_1017f854[];
extern "C" unsigned char data_1017f838[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);
extern "C" void fn_030ff8e4(void*, void*, void*);

extern "C" void fn_029cfe04(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f854;
        fn_030ff810(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f838;
    }
    fn_030ff8e4(self, (char*)self + 24, &key);
}
