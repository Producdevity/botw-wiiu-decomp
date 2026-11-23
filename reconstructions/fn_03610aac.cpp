typedef int s32;

extern "C" bool fn_0378da88(void *);

extern "C" s32 fn_03610aac(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0x4D8))) != 0) && (fn_0378da88((char *)arg0 + 0x4DC) != 0)) {
        return 1;
    }
    return 0;
}
