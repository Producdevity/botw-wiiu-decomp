typedef int s32;

extern "C" int fn_02eb7534(void*, void*, void*);
extern "C" int fn_030884bc(void*);
extern "C" void* data_10469978;

extern "C" s32 fn_03072bd4(void *arg0) {
    s32 sp8;
    void *temp_r31;

    temp_r31 = data_10469978;
    if (temp_r31 == 0) {
        return 0;
    }
    if (fn_030884bc(0) != 0) {
        return 0x3E7;
    }
    sp8 = 0;
    fn_02eb7534(temp_r31, 0, &sp8);
    return sp8;
}
