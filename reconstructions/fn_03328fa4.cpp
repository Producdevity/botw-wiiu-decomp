extern "C" void fn_030ea2e0(void *);
extern "C" void fn_0344afc8(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_03328fa4(void **arg0) {
    void *temp_r3;

    temp_r3 = fn_037966a8(*arg0);
    if (temp_r3 == 0) {
        fn_030ea2e0(arg0);
        return;
    }
    fn_0344afc8(temp_r3, (void *)(data_10549dd0));
}
