typedef int s32;
typedef float f32;

extern "C" void fn_020fc1b8(void*);
extern "C" void fn_02b744a0(void *, float);
extern "C" void* fn_037966a8(void *);

extern "C" f32 data_100201d0;

extern "C" void fn_020fb39c(void *arg0) {
    void *temp_r3;

    if ((s32) (*(s32 *)((char *)(arg0) + (0xD0))) == -1) {
        fn_020fc1b8(arg0);
        return;
    }
    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        fn_02b744a0(temp_r3, data_100201d0);
    }
}
