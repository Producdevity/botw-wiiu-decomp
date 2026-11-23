typedef int s32;

extern "C" void fn_03901180(void*, void*);

extern "C" void fn_03900198(void *arg0, void *arg1) {
    fn_03901180((char *)arg0 + 0x55C, arg1);
    (*(s32 *)((char *)(arg1) + (0xD0))) = (s32) (*(s32 *)((char *)(arg0) + (0x56C)));
}
