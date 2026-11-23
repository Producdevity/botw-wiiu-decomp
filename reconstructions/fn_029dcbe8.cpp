typedef short s16;
typedef int s32;

extern "C" int fn_029dd06c(void*);

extern "C" s32 fn_029dcbe8(void *arg0) {
    if (fn_029dd06c(arg0) == 0) {
        return 0;
    }
    (*(s16 *)((char *)(arg0) + (0x48))) = 0;
    return 1;
}
