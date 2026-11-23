typedef int s32;

extern "C" int fn_020346e4(void*, void*, void*);

extern "C" s32 fn_020351b4(s32 arg0, void *arg1, void *arg2) {
    if ((fn_020346e4((void *)(arg0 + 0x24), arg1, arg2) == 0) || (fn_020346e4((void *)(arg0 + 0x70), arg1, (char *)arg2 + 0x6C) == 0)) {
        return 0;
    }
    return 1;
}
