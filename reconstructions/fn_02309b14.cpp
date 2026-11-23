typedef int s32;

extern "C" void fn_023fe62c(void*);
extern "C" void fn_03793fcc(void*);

extern "C" void fn_02309b14(void *arg0) {
    void* const* vt1;
    fn_03793fcc((char *)arg0 + 0x2C);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[67])(arg0);
    fn_023fe62c(arg0);
}
