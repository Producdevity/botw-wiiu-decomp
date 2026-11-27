typedef int s32;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_040f4c2c(s32 *storage, s32 value) {
    s32 *target;

    target = storage;
    if ((target != 0) || (target = (s32 *)(fn_0308e578(4U)), ((target == 0) == 0))) {
        *target = value;
    }
}
