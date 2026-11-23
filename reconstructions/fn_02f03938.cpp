typedef signed char s8;

extern "C" unsigned fn_02eaa618(void *);

extern "C" void *data_104698f8;

extern "C" void fn_02f03938(void *arg0) {
    void *temp_r12;

    if (fn_02eaa618(data_104698f8) == 2) {
        temp_r12 = (*(void **)((char *)(arg0) + (0x8734)));
        if (temp_r12 != 0) {
            (*(s8 *)((char *)(temp_r12) + (0x45))) = 0;
        }
    }
}
