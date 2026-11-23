typedef int s32;

extern "C" void fn_0348799c(void *);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10148db0;

extern "C" void fn_02863374(void **arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(*arg0) + (0xF4)));
    if (temp_r3 != 0) {
        fn_0348799c(temp_r3);
    }
    fn_037b8284(arg0, &data_10148db0, 0);
}
