typedef signed char s8;
typedef int s32;

extern "C" void fn_03c380e8(void*);

extern "C" void fn_03c3a8b4(void *arg0) {
    fn_03c380e8(arg0);
    (*(s32 *)((char *)(arg0) + (0x29C))) = 0;
    (*(s32 *)((char *)(arg0) + (0x2A4))) = 0;
    (*(s8 *)((char *)(arg0) + (0x2A8))) = -1;
    (*(s8 *)((char *)(arg0) + (0x2AA))) = 0;
    (*(s8 *)((char *)(arg0) + (0x2A9))) = 1;
    (*(s32 *)((char *)(arg0) + (0x2AC))) = 0;
}
