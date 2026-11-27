extern "C" void fn_031925fc(void*, int);
extern "C" void fn_03195a10(void*);

namespace {
struct Owner {
    unsigned char padding_0[0x1A0];
    void *child;
};
}

extern "C" void fn_03195a74(void *arg0) {
    Owner *self = (Owner *)arg0;
    void *child = self->child;
    if (child != 0) {
        fn_031925fc(child, 1);
        self->child = 0;
    }
    fn_03195a10(arg0);
}
