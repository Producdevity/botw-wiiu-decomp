extern "C" void fn_0308ecec(void*);
extern "C" void fn_0308edcc(void*);

extern "C" void fn_0308edcc(void *arg0) {
    void *temp_r31;
    void *temp_r3;
    void *var_r30;

    var_r30 = (*(void **)((char *)(arg0) + (4)));
    if (var_r30 != 0) {
        do {
            temp_r31 = var_r30;
            temp_r3 = temp_r31;
            var_r30 = (*(void **)((char *)(var_r30) + (8)));
            fn_0308edcc(temp_r3);
            fn_0308ecec(temp_r31);
        } while (var_r30 != 0);
    }
}
