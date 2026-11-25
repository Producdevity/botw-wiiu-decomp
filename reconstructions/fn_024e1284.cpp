#include "botw/safe_string.h"

extern "C" unsigned char data_100cbb44[];
extern "C" unsigned char data_100cbb5c[];
extern "C" unsigned char data_100cbb68[];
extern "C" unsigned char data_100cbb4c[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" void fn_030e9ff4(void*, void*, const SafeString*);
extern "C" void fn_030ea23c(void*, void*, void*);

struct AppearFromTarget {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_024e1284(AppearFromTarget* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100cbb44;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cbb5c;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cbb68;
    }
    if (true) {
        fn_030e9ff4(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100cbb4c;
    }
    fn_030ea23c(self, &self->params[3], &key);
}
