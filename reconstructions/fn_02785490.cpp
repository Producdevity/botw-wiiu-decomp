#include "botw/safe_string.h"

extern "C" unsigned char data_1012bf7c[];
extern "C" unsigned char data_1012bf88[];
extern "C" unsigned char data_1012bf98[];
extern "C" unsigned char data_1012bf6c[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_02780ac4(void*);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct Fn02785490Self {
    unsigned char base[620];
    void* params[4];
};

extern "C" void fn_02785490(Fn02785490Self* self) {
    SafeString key;
    SafeString* k = &key;
    fn_02780ac4(self);
    key.vtable = &data_10263910;
    key.string = (const char*)data_1012bf7c;
    if (true) {
        fn_030e9be0(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012bf88;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012bf98;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1012bf6c;
    }
    fn_030e9d18(self, &self->params[3], k);
}
