typedef int s32;

extern "C" void fn_02e912fc(void*);

extern "C" void fn_02e91314(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_02e912fc(arg0);
    ((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0x3C)))[23])();
    ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0x3C)))[27])(arg0);
}
