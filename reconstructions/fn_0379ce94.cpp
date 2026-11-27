extern "C" void fn_0308e6d0(void *);
extern "C" void fn_031850dc(void*);

namespace {
struct Owner {
    unsigned char padding_0[0x3B4];
    void *child;
};
}

extern "C" void fn_0379ce94(void *arg0) {
    Owner *self = (Owner *)arg0;
    void *child = self->child;
    if (child != 0) {
        fn_031850dc(child);
        fn_0308e6d0(self->child);
        self->child = 0;
    }
}
