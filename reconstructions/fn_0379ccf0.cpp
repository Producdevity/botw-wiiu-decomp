extern "C" void fn_0389ffe8(void*, int);

namespace {
struct Owner {
    unsigned char padding_0[0x44C];
    void *child;
};
}

extern "C" void fn_0379ccf0(void *object) {
    Owner *self = (Owner *)object;
    void *child = self->child;
    if (child != 0) {
        fn_0389ffe8(child, 3);
        self->child = 0;
    }
}
