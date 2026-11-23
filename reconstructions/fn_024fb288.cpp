typedef signed char s8;
typedef int s32;

extern "C" int fn_0267301c(void*);

extern "C" s32 fn_024fb288(void *arg0) {
    if (fn_0267301c(arg0) == 0) {
        return 0;
    }
    (*(s8 *)((char *)(arg0) + (0x3B8))) = 0;
    return 1;
}
