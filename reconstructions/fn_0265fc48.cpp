typedef float f32;

namespace {
struct Actor {
    unsigned char padding_0[0x364];
    int flags;
};
}

extern "C" void fn_02b3277c(void*, float);
extern "C" f32 data_10103034;

extern "C" void fn_0265fc48(void **holder) {
    fn_02b3277c(*holder, data_10103034);
    Actor *actor = (Actor *)*holder;
    actor->flags &= 0x7FFFFFFF;
}
