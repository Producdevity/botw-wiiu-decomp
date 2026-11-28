#include "botw/safe_string.h"

extern "C" unsigned char data_1018dff4[];
extern "C" unsigned char data_1018e00c[];
extern "C" unsigned char data_1018e018[];
extern "C" unsigned char data_1018e000[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_0314b334(void*, void*, void*);
extern "C" void fn_0314b1c8(void*, void*, void*);

struct Fn02a573b8Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_02a573b8(Fn02a573b8Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1018dff4;
    if (true) {
        fn_0314b334(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018e00c;
    }
    if (true) {
        fn_0314b334(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018e018;
    }
    if (true) {
        fn_0314b334(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1018e000;
    }
    fn_0314b1c8(self, &self->params[3], &key);
}
