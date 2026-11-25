#include "botw/safe_string.h"

extern "C" unsigned char data_10149930[];
extern "C" unsigned char data_10149954[];
extern "C" unsigned char data_10149940[];
extern "C" unsigned char data_10149968[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030e9c7c(void*, void*, void*);

struct RemainsWaterNormal {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0286add8(RemainsWaterNormal* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10149930;
    if (true) {
        fn_030e9c7c(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149954;
    }
    if (true) {
        fn_030e9c7c(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149940;
    }
    if (true) {
        fn_030e9c7c(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10149968;
    }
    fn_030e9c7c(self, &self->params[3], &key);
}
