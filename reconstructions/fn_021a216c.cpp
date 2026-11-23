typedef int s32;

extern "C" void fn_03077310(void*);

extern "C" void *data_1046d6c8;

extern "C" s32 fn_021a216c(void *arg0) {
    if ((void *) data_1046d6c8 == 0) {
        return 0;
    }
    (*(s32 *)((char *)(data_1046d6c8) + (0x14))) = 0;
    fn_03077310(arg0);
    return 1;
}
