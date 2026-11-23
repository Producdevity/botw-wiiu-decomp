typedef int s32;

extern "C" int fn_0307a22c(void*);
extern "C" void fn_0307a4cc(void*);

extern "C" s32 fn_0307a924(void *arg0) {
    s32 temp_r3;

    if ((arg0 == (void *)-1) || (temp_r3 = fn_0307a22c(arg0), ((temp_r3 == -1) != 0))) {
        return 0;
    }
    fn_0307a4cc((void *) temp_r3);
    return 1;
}
