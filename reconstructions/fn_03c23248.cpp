typedef int s32;

extern "C" int fn_03c22e18(void*, void*, void*, int);
extern "C" void fn_04348cf0(void*, void*, void*, void*);

extern "C" void fn_03c23248(void *arg0, s32 arg1, s32 arg2) {
    if (fn_03c22e18(arg0, (char *)arg0 + 0x18, (void *)(arg1 + 8), (arg2 ^ 2) == 0) != 0) {
        fn_04348cf0((*(void **)((char *)(arg0) + (8))), 0, 0, (char *)arg0 + 0x18);
    }
}
