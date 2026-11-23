typedef int s32;

extern "C" int fn_020a6b00(void*, void*);

extern "C" void fn_020a6bc8(void *arg0) {
    if (fn_020a6b00(arg0, (*(void **)((char *)(arg0) + (0x7F8)))) != 0) {
        (*(s32 *)((char *)(arg0) + (0xB78))) = (s32) ((*(s32 *)((char *)(arg0) + (0xB78))) | 8);
    }
}
