typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02b616bc(void *, void *);
extern "C" int fn_02b61950(void*, void*);
extern "C" void fn_0370e02c(void*);

extern "C" void fn_02351034(void *arg0) {
    void *temp_r3;

    if ((s32) (*(u8 *)((char *)(arg0) + (0x44))) != 0) {
        fn_02b616bc((char *)arg0 + 0x34, (void *)(fn_02b61950((char *)arg0 + 0x34, (*(void **)((char *)(arg0) + (0))))));
    }
    temp_r3 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x394)));
    if (temp_r3 != 0) {
        fn_0370e02c(temp_r3);
    }
}
