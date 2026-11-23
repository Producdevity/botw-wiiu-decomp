typedef int s32;

extern "C" int fn_02a0855c(void*, void*);
extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" bool fn_0378da88(void *);

extern "C" s32 fn_02a0f604(void *arg0, void *arg1) {
    s32 temp_r31;
    void *temp_r30;
    void *temp_r3;

    temp_r30 = (char *)arg0 + 0x1C;
    fn_030bb668(temp_r30);
    if (fn_0378da88((char *)arg0 + 0x284) != 0) {
        temp_r3 = (*(void **)((char *)(arg0) + (0x290)));
        if (temp_r3 != 0) {
            temp_r31 = fn_02a0855c(temp_r3, arg1);
            fn_030bb69c(temp_r30);
            return temp_r31;
        }
    }
    fn_030bb69c(temp_r30);
    return 0;
}
