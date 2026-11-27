typedef signed char s8;

extern "C" void* fn_0308e578(unsigned);

extern "C" void fn_03eef33c(s8 *storage, s8 value) {
    s8 *target;

    target = storage;
    if ((target != 0) || (target = (s8 *)(fn_0308e578(1U)), ((target == 0) == 0))) {
        *target = value;
    }
}
