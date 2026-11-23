typedef int s32;

extern "C" int fn_025e7548(void*);
extern "C" void fn_02b7f998(float *, void *);

extern "C" s32 fn_024c695c(void **arg0) {
    if (fn_025e7548(arg0) == 0) {
        return 0;
    }
    fn_02b7f998((float *)((char *)arg0 + 0x174), *arg0);
    return 1;
}
