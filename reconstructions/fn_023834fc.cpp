typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" void* fn_0312534c(void*);

extern "C" s32 fn_023834fc(void *arg0, void *arg1) {
    void *var_r3;

    var_r3 = fn_0308e5a0(0x70U, arg1, 4);
    if (var_r3 != 0) {
        var_r3 = fn_0312534c(var_r3);
    }
    (*(void **)((char *)(arg0) + (0x18))) = var_r3;
    return 1;
}
