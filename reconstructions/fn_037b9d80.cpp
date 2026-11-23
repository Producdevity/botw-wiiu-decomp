typedef int s32;

extern "C" void* fn_0308e578(unsigned);
extern "C" int fn_037e5ec0(void*);

extern "C" void *fn_037b9d80(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    if ((var_r31 != 0) || (var_r31 = fn_0308e578(0x44U), ((var_r31 == 0) == 0))) {
        (*(s32 *)((char *)(var_r31) + (0x10))) = 0;
        fn_037e5ec0((char *)var_r31 + 0x14);
    }
    return var_r31;
}
