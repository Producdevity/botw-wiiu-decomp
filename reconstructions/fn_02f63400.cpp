typedef int s32;

extern "C" void fn_02f63160(void*, void*);

extern "C" void fn_02f63400(void *arg0, void *arg1) {
    void* const* vt1;
    if ((arg1 == 0) || (((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (0x3C)))[21])(arg1) != -1)) {
        fn_02f63160(arg0, arg1);
    }
}
