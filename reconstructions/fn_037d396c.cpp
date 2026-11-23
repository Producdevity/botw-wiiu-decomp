typedef int s32;

extern "C" void fn_030a1d68(void*, int);

extern "C" void *data_1047c348;

extern "C" void fn_037d396c(void) {
    if ((void *) data_1047c348 != 0) {
        fn_030a1d68((*(void **)((char *)(data_1047c348) + (0x5C))), (s32) data_1047c348);
        data_1047c348 = 0;
    }
}
