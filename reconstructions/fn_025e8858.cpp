extern "C" unsigned char data_100f1638[];
extern "C" void fn_0294e1d0(void*, void*, void*, void*);
extern "C" int fn_02b62ba8(void);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);

namespace {
struct Target {
    unsigned char padding_0[868];
    unsigned int flags;
};

struct Holder {
    Target *target;
};
}

extern "C" void fn_025e8858(void* * arg0) {
    Holder *self = (Holder *)arg0;
    fn_0294e1d0(self->target, (void*)(fn_02b62ba8()), 0, 0);
    self->target->flags |= 0x02000000;
    fn_037b8284(arg0, data_100f1638, 0);
}
