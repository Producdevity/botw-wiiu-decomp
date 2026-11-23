extern "C" int fn_020330b0(void*);
extern "C" void fn_03804564(void*);

extern "C" void fn_0203355c(void *arg0) {
    void *temp_r12;
    void *temp_r3;

    if (fn_020330b0(arg0) != 0) {
        temp_r12 = (*(void **)((char *)(arg0) + (0x3A0)));
        if (temp_r12 != 0) {
            temp_r3 = (*(void **)((char *)(temp_r12) + (0x7C)));
            if (temp_r3 != 0) {
                fn_03804564(temp_r3);
            }
        }
    }
}
