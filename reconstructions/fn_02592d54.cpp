typedef int s32;

extern "C" void fn_02592c40(void*);
extern "C" void fn_02950880(int);

extern "C" void fn_02592d54(void *arg0) {
    fn_02950880((*(s32 *)((char *)(arg0) + (0))));
    (*(s32 *)((char *)(arg0) + (0x7C))) = (s32) ((*(s32 *)((char *)(arg0) + (0x7C))) & 0xFFFFFFFB);
    fn_02592c40(arg0);
}
