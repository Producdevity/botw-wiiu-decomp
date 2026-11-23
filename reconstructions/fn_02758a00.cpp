typedef int s32;

extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10125324;
extern "C" s32 data_1012532c;

extern "C" void fn_02758a00(void **arg0, void *arg1) {
    void* const* vt1;
    void* const* vt2;
    void **temp_r3_2;
    void *temp_r3;

    temp_r3 = *arg0;
    temp_r3_2 = ((void ** (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[257])(temp_r3);
    if ((temp_r3_2 != 0) && (((s32 (*)())(vt2 = *(void* const**)&(*temp_r3_2))[7])() != 0)) {
        fn_037b8284(arg0, &data_1012532c, arg1);
        return;
    }
    fn_037b8284(arg0, &data_10125324, arg1);
}
