extern "C" int fn_02c1b6c0(void*, void*);
extern "C" void fn_0344ae90(void*, void*);
extern "C" void* fn_037966a8(void *);
extern "C" const unsigned char data_10549dd0[];

extern "C" void fn_0236eacc(void **arg0) {
    void *temp_r31;
    void *temp_r3;

    temp_r31 = *arg0;
    if (fn_02c1b6c0(temp_r31, 0) != 0) {
        temp_r3 = fn_037966a8(temp_r31);
        if (temp_r3 != 0) {
            fn_0344ae90(temp_r3, (void *)(data_10549dd0));
        }
    }
}
