extern "C" void fn_03b57174(void*);

extern "C" void fn_03b59878(void* arg0, int arg1) {
    void* var_r30;

    var_r30 = (*(void**)((char*)arg0 + 256));
    (*(signed char*)((char*)arg0 + 6)) = 1;
    (*(int*)((char*)arg0 + 44)) = arg1;
    if (var_r30 != 0) {
        do {
            if ((int) (*(int*)((char*)var_r30 + 264)) != 0) {
                (*(int*)((char*)var_r30 + 28)) = (int) (*(int*)((char*)arg0 + 44));
                fn_03b57174(var_r30);
            }
            var_r30 = (*(void**)((char*)var_r30 + 120));
        } while (var_r30 != 0);
    }
}
