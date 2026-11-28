typedef float f32;

extern "C" void fn_0330970c(void*, void*, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_1007cf88;

namespace {
struct Owner {
    char padding_0[0x394];
    void *target;
};
}

extern "C" void fn_022fad20(void **object) {
    Owner *owner = (Owner *)*object;
    void *target = owner->target;
    void *source = fn_037966a8(owner);

    if ((target != 0) && (source != 0)) {
        fn_0330970c(target, source, data_1007cf88);
    }
}
