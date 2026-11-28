extern "C" void fn_0371f8c8(void*, void*);

extern "C" void *data_1047c184;

namespace {
struct Owner {
    unsigned char padding_0[0x94C];
    void *child;
};
}

extern "C" void fn_0342c74c(void *object) {
    Owner *self = (Owner *)object;
    void *child = self->child;
    if (child != 0) {
        fn_0371f8c8(data_1047c184, child);
        self->child = 0;
    }
}
