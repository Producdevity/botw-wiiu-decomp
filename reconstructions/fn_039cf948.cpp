typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0399c200(void *, void *, void *);
extern "C" int fn_039cf8c0(void*, void*, void*);
extern "C" void fn_03a5add8(void*, void*, int);
extern "C" void fn_03a5b498(void*, void*, int, void*, void*);

extern "C" void fn_039cf948(void *arg0, void *arg1, void *arg2) {
    void *temp_r3;

    if (fn_039cf8c0(arg0, arg1, arg2) != 0) {
        fn_03a5b498((*(void **)((char *)(arg0) + (0x230))), arg1, (s32) (*(u8 *)((char *)(arg2) + (0))), (*(void **)((char *)(arg2) + (0x1B0))), 0);
    }
    temp_r3 = (*(void **)((char *)(arg0) + (0x230)));
    if ((s32) (*(u8 *)((char *)(temp_r3) + (0x4A4))) != 0) {
        fn_03a5add8(temp_r3, arg1, (s32) (*(u8 *)((char *)(arg2) + (0))));
        fn_0399c200(arg2, arg1, 0);
    }
}
