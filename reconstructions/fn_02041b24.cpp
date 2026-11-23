typedef int s32;
typedef unsigned int u32;

extern "C" char* fn_0204151c(void *);

extern "C" s32 fn_02041b24(void *arg0) {
    u32 temp_r0;

    temp_r0 = (*(u32 *)((char *)(fn_0204151c(arg0)) + (0x3C)));
    switch (temp_r0) {
    case 1:
        return 6;
    case 2:
        return 3;
    default:
        return 0;
    }
}
