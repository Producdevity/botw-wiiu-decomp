typedef int s32;

extern "C" void fn_0344bafc(void *);
extern "C" void fn_034c0988(void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_02358ad8(void **arg0) {
    void *temp_r31;
    void *temp_r3;
    void *temp_r3_2;

    temp_r31 = *arg0;
    temp_r3 = (*(void **)((char *)(temp_r31) + (0x3A0)));
    if (temp_r3 != 0) {
        fn_034c0988(temp_r3);
    }
    temp_r3_2 = fn_037966a8(temp_r31);
    if (temp_r3_2 != 0) {
        fn_0344bafc(temp_r3_2);
    }
    (*(s32 *)((char *)(temp_r31) + (0x364))) = (s32) ((*(s32 *)((char *)(temp_r31) + (0x364))) & 0xFFFFFFEF);
}
