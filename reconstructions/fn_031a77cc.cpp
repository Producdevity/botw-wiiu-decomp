extern "C" void fn_0308ed3c(void*);

extern "C" void fn_031a77cc(void *arg0) {
    void *var_r31;

    var_r31 = (*(void **)((char *)(arg0) + (0x188)));
    if (var_r31 != 0) {
        do {
            fn_0308ed3c(var_r31);
            var_r31 = (*(void **)((char *)(var_r31) + (8)));
        } while (var_r31 != 0);
    }
}
