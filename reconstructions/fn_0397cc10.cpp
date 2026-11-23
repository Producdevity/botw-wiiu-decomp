#include "botw/safe_string.h"

extern "C" unsigned char data_10349124[];
extern "C" unsigned char data_1034911c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_03ad425c(void*, void*, void*);

extern "C" void fn_0397cc10(void* self) {
    SafeString key;
    if (true) {
        key.vtable = &data_10263910;
        key.string = (const char*)data_10349124;
        fn_03ad425c(self, (char*)self + 36, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1034911c;
    }
    fn_03ad425c(self, (char*)self + 116, &key);
}
