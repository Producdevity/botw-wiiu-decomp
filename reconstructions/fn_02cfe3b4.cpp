#include "botw/safe_string.h"

extern "C" unsigned char data_101ddf24[];
extern "C" unsigned char data_101ddef4[];
extern "C" unsigned char data_101ddee8[];
extern "C" unsigned char data_101ddf0c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct PlayerZoraRide {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_02cfe3b4(PlayerZoraRide* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101ddf24;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ddef4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ddee8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ddf0c;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
