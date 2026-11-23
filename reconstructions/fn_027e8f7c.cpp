typedef unsigned char u8;
typedef int s32;

extern "C" void fn_028a4f60(void*);
extern "C" void fn_037b8798(void *, void *, int, int, void *);

extern "C" void fn_027e8f7c(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_028a4f60(arg0);
    if ((s32) (*(u8 *)((char *)(arg0) + (0x98))) != 0) {
        ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0x8C)))[7])((char *)arg0 + 0x88);
        fn_037b8798(arg0, (*(void **)((char *)(arg0) + (0x88))), (s32) *(*(u8 **)((char *)(arg0) + (0x80))), 0, 0);
        (*(u8 *)((char *)(arg0) + (0x98))) = 0U;
        return;
    }
    ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0x94)))[7])((char *)arg0 + 0x90);
    fn_037b8798(arg0, (*(void **)((char *)(arg0) + (0x90))), (s32) *(*(u8 **)((char *)(arg0) + (0x84))), 0, 0);
}
