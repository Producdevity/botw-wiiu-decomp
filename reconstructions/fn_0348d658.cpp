typedef int s32;
typedef unsigned int u32;

extern "C" int fn_0348d5d0(void*);
extern "C" unsigned fn_034a3ffc(void *);

extern "C" u32 fn_0348d658(void *arg0) {
    s32 temp_r3;

    if (((*(s32 *)((char *)(arg0) + (0x50))) & 1) && ((s32) (*(s32 *)((char *)(arg0) + (0x80))) != 0)) {
        temp_r3 = fn_0348d5d0(arg0);
        if (temp_r3 != 0) {
            return fn_034a3ffc((void *) temp_r3);
        }
    }
    return 0U;
}
