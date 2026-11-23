typedef int s32;

extern "C" int fn_0213ee88(void*);

extern "C" s32 fn_0213f520(void *arg0) {
    if (fn_0213ee88(arg0) != 0) {
        *(*(void ***)((char *)(arg0) + (0x64))) = (char *)arg0 + 0xD4;
        return 1;
    }
    return 0;
}
