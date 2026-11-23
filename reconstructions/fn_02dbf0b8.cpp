typedef int s32;

extern "C" int fn_02dbef38(void*, void*);

extern "C" s32 fn_02dbf0b8(void *arg0, void *arg1) {
    if ((fn_02dbef38(arg0, arg1) != 0) && ((s32) (*(s32 *)((char *)(arg0) + (0x18))) == 1)) {
        return 1;
    }
    return 0;
}
