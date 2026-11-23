typedef int s32;

extern "C" void fn_03ccc65c(void*, void*, int);

extern "C" void fn_03cde9f4(void *arg0, void *arg1) {
    fn_03ccc65c((char *)arg0 + 0x10, (char *)arg1 + 0x10, 0x8C);
    (*(s32 *)((char *)(arg0) + (0xB0))) = (s32) (*(s32 *)((char *)(arg1) + (0xB0)));
    (*(s32 *)((char *)(arg0) + (0xC))) = (s32) (*(s32 *)((char *)(arg1) + (0xC)));
}
