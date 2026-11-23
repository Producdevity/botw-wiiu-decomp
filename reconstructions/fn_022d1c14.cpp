typedef signed char s8;

extern "C" void fn_022d11f8(void*);
extern "C" void fn_0344afc8(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_022d1c14(void *arg0) {
    void *temp_r3;

    fn_022d11f8(arg0);
    temp_r3 = fn_037966a8((*(void **)((char *)(arg0) + (0))));
    if (temp_r3 != 0) {
        fn_0344afc8(temp_r3, (void *)(data_10549dd0));
    }
    (*(s8 *)((char *)(arg0) + (0xA4))) = 0;
}
