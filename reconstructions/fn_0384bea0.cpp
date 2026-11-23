typedef int s32;

extern "C" unsigned fn_03792364(void *);
extern "C" void* fn_037b5e8c(void *, const void *, void *, void *, int, int, int);
extern "C" void* data_1047c250;
extern "C" char* data_1047c2b8;

extern "C" void fn_0384bea0(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    void* const* vt1;
    void *temp_r30;

    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg1) + (4)))[7])(arg1);
    temp_r30 = (*(void **)((char *)(arg1) + (0)));
    fn_037b5e8c(data_1047c2b8, temp_r30, (void *)(fn_03792364(data_1047c250)), (char *)arg0 + 4, arg2, 0, 2);
    (*(s32 *)((char *)(arg0) + (0xC))) = arg3;
}
