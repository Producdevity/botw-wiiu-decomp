typedef int s32;

extern "C" void fn_0317f700(void*, int);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101015f8;

extern "C" void fn_02657aec(void **arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(*arg0) + (0x38C)));
    if (temp_r3 != 0) {
        fn_0317f700(temp_r3, 0);
    }
    fn_037b8284(arg0, &data_101015f8, 0);
}
