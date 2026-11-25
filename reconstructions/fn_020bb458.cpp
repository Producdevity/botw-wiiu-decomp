#include "botw/safe_string.h"

extern "C" unsigned char data_10015af4[];
extern "C" unsigned char data_10015b00[];
extern "C" unsigned char data_10015b10[];
extern "C" unsigned char data_10015b24[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);
extern "C" void fn_030ea284(void*, void*, void*);

struct AirOctaMoveBase {
    unsigned char base[16];
    void* params[4];
};

extern "C" void fn_020bb458(AirOctaMoveBase* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10015af4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10015b00;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10015b10;
    }
    if (true) {
        fn_030e9d18(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10015b24;
    }
    fn_030ea284(self, &self->params[3], &key);
}
