extern "C" void fn_03989930(void*);
extern "C" void fn_0398b244(void*);

namespace {
struct Owner {
    unsigned char padding_0[0xA4];
    void *child;
};
}

extern "C" void fn_03985370(void *arg0) {
    Owner *self = (Owner *)arg0;
    void *child = self->child;
    if (child != 0) {
        fn_0398b244(child);
        fn_03989930(self->child);
        self->child = 0;
    }
}
