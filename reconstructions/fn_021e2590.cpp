#include "botw/safe_string.h"

extern "C" unsigned char data_1004aa18[];
extern "C" unsigned char data_1004aa00[];
extern "C" unsigned char data_1004aa08[];
extern "C" unsigned char data_1004aa24[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0221da1c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea03c(void*, void*, void*);

struct ForkAddCalcScaleMapUnit {
    unsigned char base[24];
    void* params[4];
};

extern "C" void fn_021e2590(ForkAddCalcScaleMapUnit* self) {
    SafeString key;
    SafeString* k = &key;
    fn_0221da1c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1004aa18;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004aa00;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004aa08;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004aa24;
    }
    fn_030ea03c(self, &self->params[3], k);
}
