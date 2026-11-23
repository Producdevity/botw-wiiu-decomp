typedef signed char s8;

extern "C" void fn_03173a4c(void*, void*);

extern "C" void *data_1046ce48;

extern "C" void fn_03170750(void *arg0) {
    if ((void *) data_1046ce48 != 0) {
        fn_03173a4c(data_1046ce48, arg0);
        (*(s8 *)((char *)(arg0) + (0x45))) = 1;
    }
}
