extern "C" void fn_02ae05e4(void *arg0, void *arg1) {
    void *temp_r11;
    void *var_r12;

    if ((void *) (*(void **)((char *)(arg1) + (8))) == 0) {
        var_r12 = (*(void **)((char *)(arg0) + (4)));
        if (var_r12 == 0) {
            (*(void **)((char *)(arg0) + (4))) = arg1;
            (*(void **)((char *)(arg1) + (8))) = arg0;
            return;
        }
        do {
            temp_r11 = var_r12;
            var_r12 = (*(void **)((char *)(var_r12) + (4)));
        } while (var_r12 != 0);
        (*(void **)((char *)(temp_r11) + (4))) = arg1;
        (*(void **)((char *)(arg1) + (0))) = temp_r11;
        (*(void **)((char *)(arg1) + (8))) = arg0;
    }
}
