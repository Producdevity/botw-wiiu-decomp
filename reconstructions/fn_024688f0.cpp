typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0362aee8(void*, void*);
extern "C" void fn_037988ac(void*, void*);

extern "C" void fn_024688f0(void *arg0) {
    if ((s32) (*(u8 *)((char *)(arg0) + (0x10))) != 0) {
        fn_037988ac((*(void **)((char *)(arg0) + (0))), (char *)arg0 + 0x10);
    }
    fn_0362aee8((char *)arg0 + 0xAC, 0);
}
