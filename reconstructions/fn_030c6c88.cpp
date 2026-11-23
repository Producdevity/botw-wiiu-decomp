typedef unsigned char u8;
typedef int s32;

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" int fn_030c66dc(void*, void*, void*, void*, void*);
extern "C" void fn_030c77d0(void*);
extern "C" void fn_03c1942c(void *);
extern "C" unsigned char fn_03c2dabc(void);

extern "C" void fn_030c6c88(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *temp_r31;

    if ((fn_030c66dc(arg0, arg1, arg2, arg3, arg4) != 0) && (fn_03c2dabc() != 0)) {
        if ((s32) (*(u8 *)((char *)(arg0) + (0x1C0))) != 0) {
            temp_r31 = (char *)arg0 + 0x184;
            fn_030bb668(temp_r31);
            fn_03c1942c((char *)arg0 + 4);
            fn_030bb69c(temp_r31);
            if ((void *) (*(void **)((char *)(arg0) + (0x17C))) != 0) {
                goto block_6;
            }
        } else {
            fn_03c1942c((char *)arg0 + 4);
            if ((void *) (*(void **)((char *)(arg0) + (0x17C))) != 0) {
block_6:
                fn_030c77d0((*(void **)((char *)(arg0) + (0x17C))));
            }
        }
    }
}
