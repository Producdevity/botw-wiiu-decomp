extern "C" void* fn_0308e578(unsigned);
extern "C" void* fn_03c49164(void *, int, int, int);
extern "C" unsigned char data_1035e5a8[];

namespace {
struct Object {
    unsigned char padding_0[8];
    unsigned char* vtable;
};
}

extern "C" void *fn_03a49a68(void *arg0, int arg1, int arg2, int arg3) {
    Object* self = (Object*) arg0;
    if (self == 0) {
        self = (Object*) fn_0308e578(0xA4);
    }
    if (self != 0) {
        fn_03c49164(self, arg1, arg2, arg3);
        self->vtable = data_1035e5a8;
    }
    return self;
}
