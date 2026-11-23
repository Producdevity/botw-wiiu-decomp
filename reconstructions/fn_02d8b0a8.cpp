typedef int s32;

extern "C" void fn_02d4b3d4(void *, int);

extern "C" void fn_02d8b0a8(void *arg0) {
    fn_02d4b3d4(arg0, 1);
    (*(s32 *)((char *)(arg0) + (0x19B4))) = 0;
    (*(s32 *)((char *)(arg0) + (0x854))) = (s32) ((*(s32 *)((char *)(arg0) + (0x854))) | 0x800000);
}
