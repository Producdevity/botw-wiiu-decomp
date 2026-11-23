typedef unsigned char u8;
typedef int s32;
typedef float f32;

extern "C" void fn_028fa8f8(void*);
extern "C" void fn_02b7b744(void *);
extern "C" void fn_0317be7c(void *);
extern "C" void fn_0317f700(void *, int);
extern "C" void fn_0317f94c(void *, float);

extern "C" f32 data_1015e4d8;

extern "C" void fn_028fa9dc(void *arg0) {
    void *temp_r30;

    temp_r30 = (*(void **)((char *)((*(void **)((char *)(arg0) + (0)))) + (0x38C)));
    if (temp_r30 != 0) {
        if ((s32) (*(u8 *)((char *)(arg0) + (0x70))) == 0) {
            fn_0317f94c(temp_r30, data_1015e4d8);
            fn_0317be7c(temp_r30);
            fn_028fa8f8(arg0);
            fn_02b7b744((*(void **)((char *)(arg0) + (0))));
            return;
        }
        fn_0317f700(temp_r30, 0);
        goto block_4;
    }
block_4:
    fn_028fa8f8(arg0);
    fn_02b7b744((*(void **)((char *)(arg0) + (0))));
}
