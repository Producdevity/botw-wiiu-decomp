typedef int s32;

extern "C" int fn_035fd628(void*);

extern "C" s32 fn_035ff1f8(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_035fd628(arg0);
    if (temp_r3 != 0) {
        return (*(s32 *)((char *)(temp_r3) + (0x43C)));
    }
    return (*(s32 *)((char *)(arg0) + (0x6C)));
}
