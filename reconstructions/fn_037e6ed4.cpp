typedef int s32;

extern "C" void fn_036295f4(void*);
extern "C" int fn_036296f8(void*);
extern "C" void fn_037f5cd0(void*);

extern "C" s32 fn_037e6ed4(void *arg0) {
    void *temp_r3;

    if (fn_036296f8((char *)arg0 + 0xC) != 0) {
        fn_036295f4((char *)arg0 + 0xC);
    }
    temp_r3 = (*(void **)((char *)(arg0) + (8)));
    if (temp_r3 != 0) {
        fn_037f5cd0(temp_r3);
    }
    return 1;
}
