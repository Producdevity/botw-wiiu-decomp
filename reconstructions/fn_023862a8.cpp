typedef int s32;

extern "C" int fn_02386274(void*);
extern "C" void fn_0307359c(void*);

extern "C" s32 fn_023862a8(void *arg0) {
    s32 temp_r3;
    void **temp_r12;

    temp_r12 = (*(void ***)((char *)(arg0) + (0x10)));
    if ((temp_r12 == 0) || (temp_r3 = fn_02386274(*temp_r12), ((temp_r3 == -1) != 0))) {
        return 0;
    }
    fn_0307359c((void *) temp_r3);
    return 1;
}
