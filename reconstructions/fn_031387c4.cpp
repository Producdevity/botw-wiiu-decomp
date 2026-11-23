typedef int s32;

extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" int fn_0313d09c(void);

extern "C" s32 fn_031387c4(void *arg0, void *arg1) {
    void *var_r3;

    var_r3 = fn_0308e5a0(0x38U, arg1, 4);
    if (var_r3 != 0) {
        var_r3 = (void *)(fn_0313d09c());
    }
    (*(void **)((char *)(arg0) + (0x28))) = var_r3;
    return var_r3 != 0;
}
