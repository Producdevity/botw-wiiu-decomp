extern "C" void fn_033ecbac(int, void*, int, int);

extern "C" void fn_033ecc68(int arg0, void* arg1, int arg2) {
    int var_r27;
    int var_r28;

    var_r27 = 0;
    var_r28 = (*(int (**)(void*))((char*)((*(void**)((char*)arg1 + 116))) + 188))(arg1);
    if (var_r28 > 0) {
        do {
            fn_033ecbac(arg0, arg1, var_r27, arg2);
            var_r28 -= 1;
            var_r27 += 1;
        } while (var_r28 != 0);
    }
}
