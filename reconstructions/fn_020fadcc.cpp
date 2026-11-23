typedef int s32;

extern "C" void fn_020fcabc(void*);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_020fadcc(void *arg0) {
    fn_020fcabc(arg0);
    (*(s32 *)((char *)(arg0) + (0xD0))) = -1;
    fn_0294f720((*(void **)((char *)(arg0) + (0))), 4, (char *)arg0 + 0x94);
}
