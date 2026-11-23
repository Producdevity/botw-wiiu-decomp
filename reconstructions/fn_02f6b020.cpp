typedef signed char s8;

extern "C" int fn_02ea99fc(void*);
extern "C" void fn_02f6af64(void*, void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f6b020(void *arg0) {
    void *var_r31;

    var_r31 = (void *)1;
    if (fn_02ea99fc(data_104698f8) != 0) {
        var_r31 = (void *)2;
    }
    fn_02f6af64(arg0, var_r31);
    (*(s8 *)((char *)(arg0) + (0x1FD6))) = 0;
}
