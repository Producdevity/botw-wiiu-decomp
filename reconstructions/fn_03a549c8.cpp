extern "C" void* fn_0308e5a0(unsigned, void *, int);
extern "C" int fn_03a74684(void);

extern "C" void fn_03a549c8(void *arg0, void *arg1) {
    void *var_r3;

    var_r3 = fn_0308e5a0(0x20U, arg1, 4);
    if (var_r3 != 0) {
        var_r3 = (void *)(fn_03a74684());
    }
    (*(void **)((char *)(arg0) + (0x14))) = var_r3;
}
