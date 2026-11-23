typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" int fn_037e5ec0(void*);

extern "C" void fn_02ef7a20(void *arg0, s32 arg1, void *arg2) {
    void *var_r3;

    var_r3 = fn_0308e5a0(0x30U, arg2, 4);
    if (var_r3 != 0) {
        var_r3 = (void *)(fn_037e5ec0(var_r3));
    }
    (*(void **)((char *)(arg0) + (0))) = var_r3;
    (*(s32 *)((char *)(arg0) + (4))) = arg1;
}
