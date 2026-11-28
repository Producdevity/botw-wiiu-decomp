extern "C" void fn_0344bafc(void *);
extern "C" void fn_034c0988(void*);
extern "C" void* fn_037966a8(void *);

namespace {
struct Actor {
    char padding_0[0x364];
    int flags;
    char padding_368[0x38];
    void* effect;
};
}

extern "C" void fn_02358ad8(void **object) {
    Actor *actor = (Actor*)*object;
    void *effect = actor->effect;
    if (effect != 0) {
        fn_034c0988(effect);
    }
    void *component = fn_037966a8(actor);
    if (component != 0) {
        fn_0344bafc(component);
    }
    actor->flags &= ~0x10;
}
