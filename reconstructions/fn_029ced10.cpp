#include "botw/safe_string.h"

extern "C" unsigned char data_1017f56c[];
extern "C" unsigned char data_1017f578[];
extern "C" unsigned char data_1017f584[];
extern "C" unsigned char data_1017f564[];
extern "C" const unsigned char data_10263910;
extern "C" void fn_030ff7a8(void*, void*, void*);
extern "C" void fn_030ff810(void*, void*, const SafeString*);

struct Fn029ced10Self {
    unsigned char base[20];
    void* params[4];
};

extern "C" void fn_029ced10(Fn029ced10Self* self) {
    SafeString key;
    key.vtable = &data_10263910;
    key.string = (const char*)data_1017f56c;
    if (true) {
        fn_030ff7a8(self, &self->params[0], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f578;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[1], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f584;
    }
    if (true) {
        fn_030ff7a8(self, &self->params[2], &key);
        key.vtable = &data_10263910;
        key.string = (const char*)data_1017f564;
    }
    fn_030ff810(self, &self->params[3], &key);
}
