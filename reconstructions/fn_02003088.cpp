extern "C" int fn_02b74860(void*, int);
extern "C" void fn_034c44a4(void *, int);
extern "C" bool fn_0378da88(void *);

namespace {
struct Actor {
    char padding_0[0x3A0];
    void *target;
    char padding_3A4[0x844 - 0x3A4];
    char slots[1];
};
}

extern "C" void fn_02003088(void *object) {
    Actor *actor = (Actor *)object;
    void *target = actor->target;
    if (target != 0) {
        if (fn_0378da88(actor->slots) != 0) {
            fn_034c44a4(target, fn_02b74860(actor->slots, 0));
            fn_034c44a4(target, fn_02b74860(actor->slots, 1));
            return;
        }
        fn_034c44a4(target, 0);
    }
}
