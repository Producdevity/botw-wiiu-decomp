typedef unsigned int u32;

extern "C" void* fn_0308e578(unsigned);
extern "C" void fn_030ca990(unsigned *, unsigned);

extern "C" void fn_030ca998(u32 *storage, u32 value) {
    u32 *target;

    target = storage;
    if ((target != 0) || (target = (u32 *)(fn_0308e578(4U)), ((target == 0) == 0))) {
        fn_030ca990(target, value);
    }
}
