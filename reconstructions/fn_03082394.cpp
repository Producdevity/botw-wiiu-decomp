typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03a31898(void *, void *, void *, int);
extern "C" void fn_03a3bc0c(void*, void*);

extern "C" void fn_03082394(void *arg0, void *arg1, s32 arg2) {
    u8 temp_r0;
    void *temp_r3;
    void *temp_r4;
    void *var_r5;

    if (arg0 != 0) {
        temp_r0 = (*(u8 *)((char *)(arg0) + (0x55)));
        if (((s32) temp_r0 == 0) || ((s32) temp_r0 == 3)) {
            var_r5 = (void *)1;
            if (arg2 != 0) {
                var_r5 = 0;
            }
            fn_03a31898(arg0, 0, var_r5, 1);
        }
        temp_r3 = (*(void **)((char *)(arg0) + (0x44)));
        if ((temp_r3 != 0) && (arg1 != 0) && ((s32) (*(u8 *)((char *)(arg1) + (0x55))) != 0)) {
            temp_r4 = (*(void **)((char *)(arg1) + (0x44)));
            if (temp_r4 != 0) {
                fn_03a3bc0c(temp_r3, temp_r4);
            }
        }
    }
}
