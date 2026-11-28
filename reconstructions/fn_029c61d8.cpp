#include "botw/safe_string.h"

extern "C" unsigned char data_1017da8c[];
extern "C" unsigned char data_1017da94[];
extern "C" unsigned char data_1017da9c[];
extern "C" unsigned char data_1017daac[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff810(void*, void*, const SafeString*);
extern "C" void fn_030ff740(void*, void*, const SafeString*);

struct Fn029c61d8Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029c61d8(Fn029c61d8Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1017da8c;
    if (true) {
        fn_030ff810(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017da94;
    }
    if (true) {
        fn_030ff810(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017da9c;
    }
    if (true) {
        fn_030ff810(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017daac;
    }
    fn_030ff740(self, &self->params[3], &key);
}
