typedef int s32;

extern "C" void fn_02c64378(void*);

extern "C" void fn_02cec3a4(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    fn_02c64378(arg0);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[67])(arg0);
    ((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0xC)))[69])(arg0);
}
