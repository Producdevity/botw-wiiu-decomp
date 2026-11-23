#include "botw/safe_string.h"

extern "C" unsigned char data_10051924[];
extern "C" unsigned char data_10051930[];
extern "C" unsigned char data_10051940[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02200044(void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9d18(const void *, void *, const void *);

extern "C" void fn_02200e84(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02200044(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10051924;
            fn_030e9be0(self, (char*)self + 72, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10051930;
        }
        fn_030e9d18(self, (char*)self + 76, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10051924;
        key.string = (const char*)data_10051940;
    }
    fn_030e9d18(self, (char*)self + 80, &key);
}
