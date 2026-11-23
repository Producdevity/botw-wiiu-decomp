typedef int s32;

extern "C" void fn_0242a618(void*);
extern "C" void fn_0294e1d0(void*, void*, void*, void*);
extern "C" int fn_02b62ba8(void);

extern "C" void fn_02157520(void **arg0) {
    void *temp_r12;

    fn_0242a618(arg0);
    fn_0294e1d0(*arg0, (void *)(fn_02b62ba8()), 0, 0);
    temp_r12 = *arg0;
    (*(s32 *)((char *)(temp_r12) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r12) + (0x364))) | 0x02000000);
}
