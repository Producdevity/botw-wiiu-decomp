typedef int s32;

extern "C" int fn_0213f0a4(int);

extern "C" s32 fn_0238f738(void *arg0) {
    if ((s32) *(*(s32 **)((char *)(arg0) + (0x84))) == 1) {
        return fn_0213f0a4((s32) arg0) | 8;
    }
    return fn_0213f0a4((s32) arg0);
}
