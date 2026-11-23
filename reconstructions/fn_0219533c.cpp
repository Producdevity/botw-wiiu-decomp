typedef int s32;

extern "C" int fn_03267614(void*);
extern "C" void fn_03267784(void*);

extern "C" void fn_0219533c(void *arg0) {
    s32 temp_r3;

    fn_03267784(arg0);
    temp_r3 = fn_03267614(arg0);
    if (temp_r3 != 0) {
        (*(s32 *)((char *)(temp_r3) + (0x6C))) = 2;
    }
}
