#include "botw/safe_string.h"

extern "C" unsigned char data_1017d760[];
extern "C" unsigned char data_1017d770[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff92c(void*, void*, void*);

extern "C" void fn_029c5150(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017d760;
        fn_030ff7a8(self, (char*)self + 20, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017d770;
    }
    fn_030ff92c(self, (char*)self + 24, &key);
}
