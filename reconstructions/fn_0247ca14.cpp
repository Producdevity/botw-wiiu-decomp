typedef unsigned int u32;

extern "C" void* fn_02c1974c(void *, int);
extern "C" void* fn_037b4dd0(void);

extern "C" void *fn_0247ca14(void *arg0) {
    u32 temp_r0;
    void *temp_r3;
    void *var_r3;

    temp_r0 = (*(u32 *)((char *)(arg0) + (0x40)));
    switch (temp_r0) {
    case 0:
        temp_r3 = fn_02c1974c((*(void **)((char *)(arg0) + (8))), 0);
        if (temp_r3 != 0) {
            return (char *)temp_r3 + 0xBC;
        }
        return fn_037b4dd0();
    case 2:
        var_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (8)))) + (0x488)));
        if (var_r3 == 0) {
            var_r3 = fn_037b4dd0();
        }
        return var_r3;
    default:
        return fn_037b4dd0();
    }
}
