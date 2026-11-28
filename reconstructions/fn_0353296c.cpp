typedef int s32;

extern "C" void* fn_03510f04(void *, void *);
extern "C" void* fn_0354ed84(void *, const void *);

extern "C" s32 data_10555f40;

namespace {
struct Owner {
    char padding_0[0xC];
    char anchor[0x170];
    void *target;
};
}

extern "C" void fn_0353296c(void *object) {
    Owner *owner = (Owner *)object;
    void *target;

    target = fn_0354ed84(owner->anchor, &data_10555f40);
    owner->target = target;
    if (target != 0) {
        fn_03510f04(target, owner->anchor);
    }
}
