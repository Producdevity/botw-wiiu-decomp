typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0340afac(void *, int, int);
extern "C" void fn_0364b890(void*);

extern "C" void *data_1046f428;
extern "C" void *data_1047be88;

extern "C" void fn_02c44af0(void *arg0) {
    void *var_r3;

    fn_0340afac(data_1046f428, (*(s32 *)((char *)(arg0) + (0x128))), (*(s32 *)((char *)(arg0) + (0x12C))));
    var_r3 = 0;
    if ((u32) (*(u32 *)((char *)(data_1047be88) + (0x45C))) > 6U) {
        var_r3 = (*(void **)((char *)((*(void **)((char *)(data_1047be88) + (0x464)))) + (0x18)));
    }
    fn_0364b890(var_r3);
}
