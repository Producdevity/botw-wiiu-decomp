typedef int s32;

extern "C" void fn_02550ce4(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100dd39c;

extern "C" void fn_02551664(void *arg0) {
    void* const* vt1;
    fn_02550ce4(arg0);
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[69])(arg0);
    fn_037b8284(arg0, &data_100dd39c, 0);
}
