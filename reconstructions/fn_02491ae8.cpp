typedef int s32;

extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);

extern "C" void fn_02491ae8(void *arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(arg0) + (8)));
    (*(s32 *)((char *)(arg0) + (4))) = 0;
    if ((temp_r31 != 0) && (fn_03485c18(temp_r31) != 0)) {
        fn_03485f68(temp_r31);
    }
}
