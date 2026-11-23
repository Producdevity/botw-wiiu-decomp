#include "botw/safe_string.h"

extern "C" unsigned char data_1008f884[];
extern "C" unsigned char data_1008f86c[];
extern "C" unsigned char data_1008f878[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_022a0ad8(void*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_02362514(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_022a0ad8(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1008f884;
            fn_030e9be0(self, (char*)self + 184, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_1008f86c;
        }
        fn_030e9aa8(self, (char*)self + 188, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1008f884;
        key.string = (const char*)data_1008f878;
    }
    fn_030e9aa8(self, (char*)self + 196, &key);
}
