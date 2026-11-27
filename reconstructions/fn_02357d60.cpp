typedef int s32;

namespace {
struct Actor {
    char padding_0[0x364];
    s32 flags;
    char padding_368[0x38];
    void *component;
};
}

extern "C" void fn_034c08f0(void*);
extern "C" void fn_037afa78(void*, int, int);

extern "C" void fn_02357d60(void **object) {
    Actor *actor = (Actor *)*object;
    if (actor->component != 0) {
        fn_034c08f0(actor->component);
    }
    fn_037afa78(actor, 2, 1);
    actor->flags |= 0x10;
}
