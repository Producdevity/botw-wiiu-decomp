extern "C" void fn_02535768(void*);
extern "C" void fn_0344bafc(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_026110f8(void **arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8(*arg0);
    if (temp_r3 != 0) {
        fn_0344bafc(temp_r3);
    }
    fn_02535768(arg0);
}
