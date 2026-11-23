typedef int s32;

extern "C" void fn_02756a20(void*);

extern "C" void fn_027e3758(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_02756a20(arg0);
    ((s32 (*)())(vt2 = *(void* const**)((char *)(((void * (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[53])(arg0)) + (0xC)))[13])();
}
