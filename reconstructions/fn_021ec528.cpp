#include "botw/safe_string.h"

extern "C" unsigned char data_1004d354[];
extern "C" unsigned char data_1004d360[];
extern "C" unsigned char data_1004d34c[];
extern "C" unsigned char data_1004d36c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

struct Fn021ec528Self {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_021ec528(Fn021ec528Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1004d354;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004d360;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004d34c;
    }
    if (true) {
        fn_030e9b44(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1004d36c;
    }
    fn_030e9b44(self, &self->params[3], &key);
}
