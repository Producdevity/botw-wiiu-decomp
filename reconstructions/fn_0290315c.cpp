typedef int s32;

extern "C" void fn_034c44a4(void*, int);
extern "C" void* data_10463748;

namespace {
struct Inner {
    unsigned char padding_0[0x3A0];
    void *target;
};

struct Object {
    Inner *inner;
    unsigned char padding_4[0x28 - 4];
    s32 state;
};
}

extern "C" void fn_0290315c(void *object) {
    Inner *inner;
    void *target;

    if ((void *)data_10463748 != 0) {
        inner = ((Object *)object)->inner;
        if (inner != 0) {
            target = inner->target;
            if (target != 0) {
                fn_034c44a4(target, 0);
            }
        }
        ((Object *)object)->state = 0;
    }
}
