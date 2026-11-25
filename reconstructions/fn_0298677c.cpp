#include "botw/safe_string.h"

extern "C" unsigned char data_10174388[];
extern "C" unsigned char data_10174374[];
extern "C" unsigned char data_1017439c[];
extern "C" unsigned char data_101743b4[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030ea23c(void*, void*, void*);

struct WizzrobeFindPlayer {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0298677c(WizzrobeFindPlayer* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10174388;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10174374;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017439c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101743b4;
    }
    fn_030ea23c(self, &self->params[3], &key);
}
