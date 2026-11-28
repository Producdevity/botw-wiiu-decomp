#include "botw/safe_string.h"

extern "C" unsigned char data_10179120[];
extern "C" unsigned char data_10179118[];
extern "C" unsigned char data_10179130[];
extern "C" unsigned char data_10179128[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);

struct Fn029affc0Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029affc0(Fn029affc0Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10179120;
    if (true) {
        fn_030ff7a8(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10179118;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10179130;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10179128;
    }
    fn_030ff7a8(self, &self->params[3], &key);
}
