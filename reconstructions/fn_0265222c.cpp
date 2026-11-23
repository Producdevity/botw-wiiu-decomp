typedef int s32;

extern "C" void fn_034c1264(void*, void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10100858;

extern "C" void fn_0265222c(void **arg0) {
    void *temp_r12;
    void *temp_r3;
    void *temp_r4;

    temp_r12 = *arg0;
    temp_r4 = (*(void **)((char *)(temp_r12) + (0xF4)));
    temp_r3 = (*(void **)((char *)(temp_r12) + (0x3A0)));
    if ((temp_r4 != 0) && (temp_r3 != 0)) {
        fn_034c1264(temp_r3, temp_r4);
    }
    fn_037b8284(arg0, &data_10100858, 0);
}
