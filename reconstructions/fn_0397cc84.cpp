#include "botw/safe_string.h"

extern "C" unsigned char data_10349130[];
extern "C" unsigned char data_10349140[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0397cc10(void*);
extern "C" void fn_03ad425c(void*, void*, void*);

extern "C" void fn_0397cc84(void* self) {
    SafeString key;
    if (true) {
        fn_0397cc10(self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10349130;
        fn_03ad425c(self, (char*)self + 252, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10349140;
    }
    fn_03ad425c(self, (char*)self + 352, &key);
}
