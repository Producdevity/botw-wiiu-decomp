extern "C" void fn_03595f28(void *, unsigned);
extern "C" void fn_03596280(void*);
extern "C" void fn_03be1738(void*);

extern "C" void fn_0350b448(void *arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x14)));
    if (temp_r3 != 0) {
        temp_r31 = (*(void **)((char *)(temp_r3) + (0x53C)));
        if (temp_r31 != 0) {
            fn_03596280(temp_r3);
            fn_03595f28((*(void **)((char *)(arg0) + (0x14))), 0U);
            fn_03be1738(temp_r31);
        }
    }
}
