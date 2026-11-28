extern "C" void fn_031925fc(void*, int);

namespace {
struct Owner {
    unsigned char padding_0[0x1AC];
    void *child;
};
}

extern "C" void fn_03195ac0(void *object) {
    Owner *self = (Owner *)object;
    void *child = self->child;
    if (child != 0) {
        fn_031925fc(child, 1);
        self->child = 0;
    }
}
