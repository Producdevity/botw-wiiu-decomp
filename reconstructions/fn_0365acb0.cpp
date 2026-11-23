extern "C" void *data_1047be88;
extern "C" void fn_03657fac(void*);
extern "C" void fn_0365867c(void*);
extern "C" void fn_03659fa8(void*);
extern "C" void fn_0365aa10(void*);

extern "C" void fn_0365acb0(void* arg0) {
    int temp_r0;

    temp_r0 = (*(int*)((char*)data_1047be88 + 1328));
    if ((temp_r0 != 0) && (temp_r0 != 5) && (temp_r0 != 2)) {
        fn_03657fac(arg0);
        fn_0365867c(arg0);
        fn_03659fa8(arg0);
        fn_0365aa10(arg0);
    }
}
