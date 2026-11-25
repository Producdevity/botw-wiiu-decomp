#include "botw/safe_string.h"

extern "C" unsigned char data_1014b3bc[];
extern "C" unsigned char data_1014b3b4[];
extern "C" const unsigned char data_10263910;
struct HeroSoulGiftRoot;
extern "C" void fn_026a82cc(HeroSoulGiftRoot*);
extern "C" bool fn_030e9aa8(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

extern "C" void fn_0287581c(void* self) {
    SafeString key;
    if (true) {
        fn_026a82cc((HeroSoulGiftRoot*)self);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014b3bc;
        fn_030e9aa8(self, (char*)self + 100, &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1014b3b4;
    }
    fn_030e9c7c(self, (char*)self + 108, &key);
}
