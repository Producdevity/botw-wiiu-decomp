typedef int s32;

extern "C" void fn_034c1264(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10100858;

namespace {
struct Inner {
    unsigned char padding_0[0xF4];
    void *source;
    unsigned char padding_F8[0x3A0 - 0xF8];
    void *target;
};
}

extern "C" void fn_0265222c(void **owner) {
    Inner *inner;
    void *source;
    void *target;

    inner = (Inner *)*owner;
    source = inner->source;
    target = inner->target;
    if ((source != 0) && (target != 0)) {
        fn_034c1264(target, source);
    }
    fn_037b8284(owner, &data_10100858, 0);
}
