typedef unsigned char u8;
typedef int s32;

extern "C" void fn_028c3be0(void*);

extern "C" void fn_028a9c10(void *arg0) {
    void* const* vt1;
    fn_028c3be0(arg0);
    if ((s32) (*(u8 *)((char *)(arg0) + (0x391))) == 0) {
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[85])(arg0);
    }
}
