extern "C" void* fn_0355ef40(void *);
extern "C" void fn_0356fc30(void *, int);
extern "C" char* data_1047c390;

extern "C" void fn_023ed42c(void) {
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = (*(void **)((char *)(data_1047c390) + (0x1C)));
    if (temp_r3 != 0) {
        temp_r3_2 = fn_0355ef40(temp_r3);
        if (temp_r3_2 != 0) {
            fn_0356fc30(temp_r3_2, 0);
        }
    }
}
