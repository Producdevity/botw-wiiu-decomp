typedef signed char s8;

extern "C" void fn_03a31898(void*, void*, void*, int);

extern "C" void fn_02fd14e8(void *arg0) {
    void *temp_r3;

    temp_r3 = (*(void **)((char *)(arg0) + (0x1B80)));
    if (temp_r3 != 0) {
        fn_03a31898(temp_r3, 0, 0, 1);
        (*(s8 *)((char *)(arg0) + (0x1B88))) = 1;
    }
}
