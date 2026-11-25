#include "botw/safe_string.h"

extern "C" unsigned char data_1010dd38[];
extern "C" unsigned char data_1010dd50[];
extern "C" unsigned char data_1010dd20[];
extern "C" unsigned char data_1010dd2c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030e9c7c(void*, void*, void*);

struct HeroSoulGiftRoot {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_026a82cc(HeroSoulGiftRoot* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1010dd38;
    if (true) {
        fn_030e9d18(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010dd50;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010dd20;
    }
    if (true) {
        fn_030e9c7c(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010dd2c;
    }
    fn_030e9c7c(self, &self->params[3], &key);
}
