#include "botw/safe_string.h"

extern "C" unsigned char data_100f5584[];
extern "C" unsigned char data_100f558c[];
extern "C" unsigned char data_100f5594[];
extern "C" unsigned char data_100f55a0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);
extern "C" bool fn_030e9d18(const void* action, void* value, const void* key);

struct EscapeFromTargetFront {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_02607194(EscapeFromTargetFront* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_100f5584;
    if (true) {
        fn_030e9b44(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f558c;
    }
    if (true) {
        fn_030e9b44(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f5594;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_100f55a0;
    }
    fn_030e9d18(self, &self->params[3], &key);
}
