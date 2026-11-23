typedef int s32;

extern "C" void fn_034c0f1c(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100ec518;

extern "C" void fn_025b7ae8(void **arg0) {
    void *temp_r12;

    temp_r12 = *arg0;
    (*(s32 *)((char *)(temp_r12) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x364))) | 0x40000000);
    fn_034c0f1c((*(void **)((char *)(temp_r12) + (0x3A0))));
    fn_037b8284(arg0, &data_100ec518, 0);
}
