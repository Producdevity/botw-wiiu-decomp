typedef int s32;

extern "C" int fn_03581e54(void*);
extern "C" char* data_1047c390;

extern "C" void fn_03580f9c(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(data_1047c390) + (0x54)));
    if (temp_r3 != 0) {
        (*(s32 *)((char *)(arg0) + (0x274))) = fn_03581e54(temp_r3);
    }
}
