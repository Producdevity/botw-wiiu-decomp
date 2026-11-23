typedef int s32;

extern "C" void fn_030a1d68(void*, int);

extern "C" void *data_1047c33c;

extern "C" void fn_037d1a48(void) {
    if ((void *) data_1047c33c != 0) {
        fn_030a1d68((*(void **)((char *)(data_1047c33c) + (0x5C))), (s32) data_1047c33c);
        data_1047c33c = 0;
    }
}
