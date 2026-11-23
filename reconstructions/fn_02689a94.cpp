extern "C" void fn_0370de48(void*, int);
extern "C" void fn_0370e02c(void*);

extern "C" void fn_02689a94(void **arg0) {
    void *temp_r12;
    void *temp_r31;

    temp_r12 = *arg0;
    if (temp_r12 != 0) {
        temp_r31 = (*(void **)((char *)(temp_r12) + (0x394)));
        if (temp_r31 != 0) {
            fn_0370e02c(temp_r31);
            fn_0370de48(temp_r31, 1);
        }
    }
}
