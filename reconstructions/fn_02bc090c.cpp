extern "C" void* fn_02c0378c(void* holder);
extern "C" void fn_02c0f270(void*, float);

namespace {
struct Owner {
    char padding_0[0x10];
    char holder[8];
    float* value;
};

struct Target {
    char padding_0[0x550];
    char state[1];
};
}

extern "C" void fn_02bc090c(void* owner, void* unused) {
    Owner* self = (Owner*)owner;
    Target* target = (Target*)fn_02c0378c(self->holder);

    if (target != 0) {
        fn_02c0f270(target->state, *self->value);
    }
}
