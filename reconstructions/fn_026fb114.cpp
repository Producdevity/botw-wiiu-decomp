#include "botw/safe_string.h"

extern "C" unsigned char data_10119f5c[];
extern "C" unsigned char data_10119f70[];
extern "C" unsigned char data_10119f44[];
extern "C" unsigned char data_10119f30[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_025c6c6c(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct Fn026fb114Self {
    unsigned char base[676];
    void* params[4];
};

extern "C" void fn_026fb114(Fn026fb114Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_025c6c6c(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_10119f5c;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119f70;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119f44;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10119f30;
    }
    fn_030e9be0(self, &self->params[3], k);
}
