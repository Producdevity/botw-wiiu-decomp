#include "botw/safe_string.h"

extern "C" unsigned char data_10180554[];
extern "C" unsigned char data_10180564[];
extern "C" unsigned char data_10180540[];
extern "C" unsigned char data_10180530[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff7dc(void*, void*, void*);

struct Fn029d3720Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029d3720(Fn029d3720Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10180554;
    if (true) {
        fn_030ff7a8(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180564;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180540;
    }
    if (true) {
        fn_030ff7dc(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10180530;
    }
    fn_030ff7dc(self, &self->params[3], &key);
}
