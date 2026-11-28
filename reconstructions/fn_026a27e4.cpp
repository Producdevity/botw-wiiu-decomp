#include "botw/safe_string.h"

extern "C" unsigned char data_1010caf0[];
extern "C" unsigned char data_1010cae0[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02674a8c(void*);
extern "C" void fn_030ea0cc(void*, void*, void*);
extern "C" void fn_030ea1f4(void*, void*, void*);

struct Fn026a27e4Self {
    unsigned char base[32];
    void* params[2];
};

extern "C" void fn_026a27e4(Fn026a27e4Self* self) {
    SafeString key;
    fn_02674a8c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1010caf0;
    if (true) {
        fn_030ea0cc(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1010cae0;
    }
    fn_030ea1f4(self, &self->params[1], &key);
}
