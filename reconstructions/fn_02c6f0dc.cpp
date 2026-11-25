#include "botw/safe_string.h"

extern "C" unsigned char data_101ca620[];
extern "C" unsigned char data_101ca62c[];
extern "C" unsigned char data_101ca5d8[];
extern "C" unsigned char data_101ca5f0[];
extern "C" unsigned char data_101ca608[];
extern "C" unsigned char data_101ca5bc[];
extern "C" unsigned char data_101ca640[];
extern "C" unsigned char data_101ca5a4[];
extern "C" unsigned char data_101ca65c[];
extern "C" unsigned char data_101ca668[];
extern "C" unsigned char data_101ca678[];
extern "C" unsigned char data_101ca688[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);

struct PlayerCutHorseJump {
    unsigned char base[20];
    void* params[12];
};

extern "C" void fn_02c6f0dc(PlayerCutHorseJump* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_101ca620;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca62c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca5d8;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca5f0;
    }
    if (true) {
        fn_030e9be0(self, &self->params[3], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca608;
    }
    if (true) {
        fn_030e9be0(self, &self->params[4], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca5bc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[5], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca640;
    }
    if (true) {
        fn_030e9be0(self, &self->params[6], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca5a4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[7], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca65c;
    }
    if (true) {
        fn_030e9b44(self, &self->params[8], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca668;
    }
    if (true) {
        fn_030e9be0(self, &self->params[9], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca678;
    }
    if (true) {
        fn_030e9be0(self, &self->params[10], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_101ca688;
    }
    fn_030e9be0(self, &self->params[11], &key);
}
