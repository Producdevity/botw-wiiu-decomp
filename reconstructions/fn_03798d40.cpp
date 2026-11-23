extern "C" void fn_034c1ca8(void*, int);
extern "C" void fn_0380fa5c(void*, int);

extern "C" void fn_03798d40(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r31 = (*(void **)((char *)(arg0) + (0x3A0)));
    if (temp_r31 != 0) {
        temp_r3 = (*(void **)((char *)(temp_r31) + (0x58)));
        if (temp_r3 != 0) {
            fn_0380fa5c(temp_r3, 0);
            fn_034c1ca8(temp_r31, 1);
        }
    }
}
