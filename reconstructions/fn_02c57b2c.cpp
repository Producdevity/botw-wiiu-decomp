typedef int s32;

extern "C" void fn_02c3630c(int, void*);
extern "C" void fn_02c578c8(void*);

extern "C" void fn_02c57b2c(void *arg0) {
    s32 *temp_r3;

    temp_r3 = (*(s32 **)((char *)(arg0) + (8)));
    if ((temp_r3 == 0) || (fn_02c578c8(temp_r3), (((s32) *(*(s32 **)((char *)(arg0) + (8))) == 4) != 0))) {
        fn_02c3630c(1, (void *)1);
    }
}
