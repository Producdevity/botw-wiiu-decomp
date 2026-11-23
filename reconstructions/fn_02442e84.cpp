#include "botw/safe_string.h"

extern "C" unsigned char data_100b6490[];
extern "C" unsigned char data_100b6498[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02440ec4(void*, void*, void*);
extern "C" void fn_02440ed4(void*, void*, void*);

extern "C" void fn_02442e84(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6490;
        fn_02440ec4(self, (char*)self + 12, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100b6498;
    }
    fn_02440ed4(self, (char*)self + 16, &key);
}
