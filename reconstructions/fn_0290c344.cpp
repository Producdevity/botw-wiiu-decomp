#include "botw/safe_string.h"

extern "C" unsigned char data_10161910[];
extern "C" unsigned char data_10161918[];
extern "C" unsigned char data_10161924[];
extern "C" unsigned char data_10161908[];
extern "C" const unsigned char data_10263910;
extern "C" bool fn_030e9b44(const void* action, void* value, const void* key);
extern "C" bool fn_030e9be0(const void* action, void* value, const void* key);

struct SwarmEscapeDie {
    unsigned char base[32];
    void* params[4];
};

extern "C" void fn_0290c344(SwarmEscapeDie* self) {
    SafeString key;
    const SafeString* k = &key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_10161910;
    if (true) {
        fn_030e9b44(self, &self->params[0], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161918;
    }
    if (true) {
        fn_030e9be0(self, &self->params[1], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161924;
    }
    if (true) {
        fn_030e9be0(self, &self->params[2], k);
        key.vtable = &data_10263910;
        key.string = (const char*)data_10161908;
    }
    fn_030e9be0(self, &self->params[3], k);
}
