typedef int s32;

extern "C" void fn_03797a04(void*, int, void*, void*);

extern "C" void fn_027fc090(void **arg0) {
    void* const* vt1;
    void *temp_r3;
    void *temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = ((void * (*)(void *))(vt1 = *(void* const**)((char *)(temp_r3) + (0xE8)))[271])(temp_r3);
    if (temp_r3_2 != 0) {
        (*(s32 *)((char *)(temp_r3_2) + (4))) = 0;
    }
    fn_03797a04(*arg0, 4, 0, 0);
}
