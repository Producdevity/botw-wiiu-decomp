extern "C" void fn_03b3eb0c(void*, void*);
extern "C" void fn_03b4049c(void*, void*, void*);

extern "C" void *data_1047ed30;
extern "C" void *data_1047ed58;

extern "C" void fn_03a75474(void *arg0) {
    void *temp_r31;

    temp_r31 = (*(void **)((char *)(data_1047ed30) + (0x14)));
    fn_03b3eb0c(data_1047ed30, arg0);
    fn_03b4049c(data_1047ed58, arg0, temp_r31);
}
