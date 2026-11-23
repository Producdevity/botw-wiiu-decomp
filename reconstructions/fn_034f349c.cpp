typedef int s32;

extern "C" int fn_03a64738(void*, void*);

extern "C" s32 fn_034f349c(void *arg0, void *arg1) {
    void* const* vt1;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (4)))[7])(arg1);
    return fn_03a64738((*(void **)((char *)(arg0) + (4))), (*(void **)((char *)(arg1) + (0)))) != 0;
}
