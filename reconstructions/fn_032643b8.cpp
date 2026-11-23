typedef int s32;

extern "C" void fn_0361f468(void*, void*);

extern "C" void *data_1047b444;

extern "C" s32 fn_032643b8(void *arg0) {
    void **temp_r12;
    void *temp_r4;

    temp_r12 = (*(void ***)((char *)(arg0) + (0x10)));
    temp_r4 = *temp_r12;
    if (temp_r4 != (void *)-1) {
        *temp_r12 = (void *)-1;
        if ((void *) data_1047b444 != 0) {
            fn_0361f468(data_1047b444, temp_r4);
        }
    }
    return 1;
}
