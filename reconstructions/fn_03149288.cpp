extern "C" void fn_0378f91c(void*, void*);
extern "C" void* data_1047c244;

namespace {
struct Owner {
    unsigned char padding_0[0x6A8];
    void *child;
};
}

extern "C" void fn_03149288(void *object) {
    Owner *self = (Owner *)object;
    void *child = self->child;
    if (child != 0) {
        fn_0378f91c(data_1047c244, child);
        self->child = 0;
    }
}
