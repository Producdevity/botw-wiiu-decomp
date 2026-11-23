typedef signed char s8;
typedef int s32;

extern "C" void fn_03b64ef4(void*);

extern "C" void fn_03b639ac(void *arg0) {
    (*(s32 *)((char *)(arg0) + (0x4C0))) = -1;
    (*(s32 *)((char *)(arg0) + (0x4B4))) = 0;
    fn_03b64ef4(arg0);
    (*(s8 *)((char *)(arg0) + (0x4BC))) = 0;
}
