typedef int s32;

extern "C" void fn_02491824(void*);
extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485e4c(void*);

extern "C" void fn_02491a88(void *arg0, s32 arg1) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (8)));
    (*(s32 *)((char *)(arg0) + (4))) = arg1;
    if ((temp_r31 != 0) && (fn_03485c18(temp_r31) == 0)) {
        fn_02491824(arg0);
        fn_03485e4c(temp_r31);
    }
}
