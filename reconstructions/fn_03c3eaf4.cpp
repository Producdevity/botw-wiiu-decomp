typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c3eaf4(void *arg0, void *arg1, s32 *arg2) {
    (*(s32 *)((char *)(arg1) + (4))) = (s32) (*(s32 *)((char *)(arg0) + (0x1F0)));
    (*(s32 *)((char *)(arg1) + (0x80))) = (s32) (*(s32 *)((char *)(arg0) + (0x1EC)));
    (*(s32 *)((char *)(arg1) + (0x7C))) = (s32) *arg2;
    if ((s32) (*(u8 *)((char *)(arg0) + (0x1D0))) == 0) {
        (*(s8 *)((char *)(arg1) + (0x78))) = 1;
        (*(s32 *)((char *)(arg0) + (0x498))) = 0;
        return;
    }
    (*(s32 *)((char *)(arg1) + (0x74))) = (s32) ((*(s32 *)((char *)(arg1) + (0x74))) + 1);
    (*(s32 *)((char *)(arg0) + (0x498))) = (s32) (*(s32 *)((char *)(arg0) + (0x1D4)));
}
