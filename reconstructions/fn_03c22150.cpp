typedef int s32;

extern "C" void fn_03c21ec4(void*, void*, void*, int);
extern "C" void fn_04348cf0(void*, void*, void*, void*);

extern "C" void fn_03c22150(void *arg0, s32 arg1, s32 arg2) {
    fn_03c21ec4(arg0, (char *)arg0 + 0x18, (void *)(arg1 + 8), (arg2 ^ 2) == 0);
    fn_04348cf0((*(void **)((char *)(arg0) + (8))), 0, 0, (char *)arg0 + 0x18);
}
