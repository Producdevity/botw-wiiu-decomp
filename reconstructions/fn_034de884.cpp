typedef int s32;

extern "C" int fn_0378dce8(int, void*, void*);

extern "C" s32 fn_034de884(void *arg0, void *arg1) {
    if ((arg1 != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x28))) == 1) && (fn_0378dce8((s32) arg0, arg1, 0) != 0)) {
        return 1;
    }
    return 0;
}
