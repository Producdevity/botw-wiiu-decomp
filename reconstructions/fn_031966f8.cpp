extern "C" void fn_031925fc(void*, int);

namespace {
struct Owner {
    unsigned char padding_0[0x1BC];
    void *child;
};
}

extern "C" void fn_031966f8(void *arg0) {
    Owner *self = (Owner *)arg0;
    void *child = self->child;
    if (child != 0) {
        fn_031925fc(child, 1);
        self->child = 0;
    }
}
