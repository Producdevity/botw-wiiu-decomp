extern "C" void fn_026a82ac(void*);
extern "C" void fn_0370d910(void*, void*, void*, int);

extern "C" void fn_029ac2f8(void **arg0) {
    void *temp_r3;

    fn_026a82ac(arg0);
    temp_r3 = (*(void **)((char *)(*arg0) + (0x394)));
    if (temp_r3 != 0) {
        fn_0370d910(temp_r3, 0, 0, 0);
    }
}
