typedef signed char s8;

extern "C" void* fn_0308e578(unsigned);
struct FastMutexSection;
extern "C" FastMutexSection* fn_030bb49c(FastMutexSection *);

extern "C" void *fn_03618044(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x50U), ((var_r31 == 0) == 0))) {
        (*(s8 *)((char *)(var_r31) + (0x10))) = 1;
        fn_030bb49c((FastMutexSection *)((char *)var_r31 + 0x14));
    }
    return var_r31;
}
