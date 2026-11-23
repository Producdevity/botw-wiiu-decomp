typedef int s32;

extern "C" int fn_02f9399c(void*);
extern "C" int fn_03089a30(void);

extern "C" s32 fn_02f93a0c(void *arg0, void *arg1) {
    s32 temp_r3;

    if (((fn_03089a30() != 0) && (arg1 != (void *)0xE)) || ((s32) (*(s32 *)((char *)(arg0) + (0x1B94))) != -1) || (temp_r3 = fn_02f9399c(arg1), ((temp_r3 == -1) != 0))) {
        return 0;
    }
    (*(s32 *)((char *)(arg0) + (0x1B94))) = temp_r3;
    return 1;
}
