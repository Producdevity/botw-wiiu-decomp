typedef int s32;

extern "C" void fn_0317f638(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_101570dc;

extern "C" void fn_028be654(void **arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(*arg0) + (0x38C)));
    if (temp_r3 != 0) {
        fn_0317f638(temp_r3);
    }
    fn_037b8284(arg0, &data_101570dc, 0);
}
