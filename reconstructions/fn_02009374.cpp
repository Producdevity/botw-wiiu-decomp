typedef int s32;

extern "C" void fn_02af5bd4(void*);
extern "C" void fn_031984b4(void*, void*);

extern "C" void fn_02009374(void *arg0) {
    void* const* vt1;
    void* const* vt2;
    void *temp_r3;
    void *var_r30;

    fn_02af5bd4(arg0);
    temp_r3 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (0xE8)))[195])(arg0);
    if (temp_r3 != 0) {
        var_r30 = 0;
        if (((s32 (*)(void *))(vt2 = *(void* const**)((char *)(arg0) + (0xE8)))[333])(arg0) != 0) {
            var_r30 = (void *)1;
        }
        fn_031984b4(temp_r3, var_r30);
    }
}
