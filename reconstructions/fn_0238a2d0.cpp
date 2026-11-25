#include "botw/safe_string.h"

extern "C" unsigned char data_10096108[];
extern "C" unsigned char data_10096130[];
extern "C" unsigned char data_1009611c[];
extern "C" unsigned char data_10096148[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea0cc(void*, void*, void*);

struct ReuseActorDelete {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_0238a2d0(ReuseActorDelete* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10096108;
    if (true) {
        fn_030e9d18(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10096130;
    }
    if (true) {
        fn_030e9d18(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1009611c;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10096148;
    }
    fn_030ea0cc(self, &self->params[3], &key);
}
