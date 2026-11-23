typedef int s32;

extern "C" int fn_0339eae8(void*);
extern "C" void fn_03486cd4(void*, void*, int);

extern "C" void fn_02158858(void **arg0) {
    s32 temp_r3;
    void *temp_r31;

    temp_r31 = *arg0;
    temp_r3 = fn_0339eae8(temp_r31);
    if (temp_r3 != 0) {
        fn_03486cd4((void *) temp_r3, (char *)temp_r31 + 0x1F8, 1);
    }
}
