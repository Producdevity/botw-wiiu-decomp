namespace {
struct Source {
    unsigned char padding_0[0x10];
    unsigned char holder[8];
    const float* amount;
};

struct Target {
    unsigned char padding_0[0x550];
    unsigned char gauge[1];
};
}

extern "C" void* fn_02c0378c(void* holder);
extern "C" void fn_02c0f3e0(void*, float);

extern "C" void fn_02bc02c8(void* object, void* unused) {
    Source* source = (Source*)object;
    Target* target = (Target*)fn_02c0378c(source->holder);
    if (target != 0) {
        fn_02c0f3e0(target->gauge, *source->amount);
    }
}
