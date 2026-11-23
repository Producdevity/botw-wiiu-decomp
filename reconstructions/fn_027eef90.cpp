#include "botw/safe_string.h"

extern "C" unsigned char data_10138858[];
extern "C" unsigned char data_10138844[];
extern "C" unsigned char data_10138834[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_027fc594(void *);
extern "C" bool fn_030e9b44(const void *, void *, const void *);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" void fn_030e9c7c(void *, void *, void *);

extern "C" void fn_027eef90(void* self) {
    SafeString key;
    if (true) {
        if (true) {
            fn_027fc594(self);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10138858;
            fn_030e9b44(self, (char*)self + 332, &key);
            key.vtable = &data_10263910;
            key.string = (const char*)data_10138844;
        }
        fn_030e9be0(self, (char*)self + 336, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10138858;
        key.string = (const char*)data_10138834;
    }
    fn_030e9c7c(self, (char*)self + 340, &key);
}
