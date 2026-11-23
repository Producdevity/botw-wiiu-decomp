#include "botw/safe_string.h"

extern "C" unsigned char data_100fa1a4[];
extern "C" unsigned char data_100fa194[];
extern "C" unsigned char data_100fa1b4[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02902538(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" bool fn_030e9aa8(const void *, void *, const void *);

extern "C" void fn_02627d80(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_02902538(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100fa1a4;
            fn_030e9b44(self, (char*)self + 92, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_100fa194;
        }
        fn_030e9be0(self, (char*)self + 96, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100fa1a4;
        key.string = (const char*)data_100fa1b4;
    }
    fn_030e9aa8(self, (char*)self + 100, &key);
}
