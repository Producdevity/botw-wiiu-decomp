typedef unsigned int u32;

extern "C" void fn_0340f03c(void);
extern "C" void fn_037c7b0c(void*);

extern "C" void *data_1046ca64;
extern "C" void *data_1047c318;

extern "C" void fn_0341ad40(void) {
    if ((void *) data_1047c318 != 0) {
        fn_037c7b0c(data_1047c318);
    }
    if (((void *) data_1046ca64 == 0) || (((u32) (*(u32 *)((char *)(data_1046ca64) + (0x18))) >> 0x14U) & 1)) {
        fn_0340f03c();
    }
}
