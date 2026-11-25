#include "botw/safe_string.h"

extern "C" unsigned char data_10161ac4[];
extern "C" unsigned char data_10161ab4[];
extern "C" unsigned char data_10161abc[];
extern "C" unsigned char data_10161ad0[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct SwarmRangeKeepCircleMove {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0290cfd8(SwarmRangeKeepCircleMove* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10161ac4;
    if (true) {
        fn_030e9be0(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161ab4;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161abc;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161ad0;
    }
    fn_030e9be0(self, &self->params[3], &key);
}
