typedef int s32;

extern "C" void fn_03485f68(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_10106754;

extern "C" void fn_02675b90(void *arg0) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(arg0) + (0x28)));
    if (temp_r3 != 0) {
        fn_03485f68(temp_r3);
    }
    temp_r3_2 = (*(void **)((char *)(arg0) + (0x24)));
    if (temp_r3_2 != 0) {
        fn_03485f68(temp_r3_2);
    }
    fn_037b8284(arg0, &data_10106754, 0);
}
