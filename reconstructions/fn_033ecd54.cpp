extern "C" void fn_033ec7ac(int, void*, int, int, int);

extern "C" void fn_033ecd54(int arg0, void* arg1, int arg2) {
    int var_r27;
    int var_r28;

    var_r27 = 0;
    var_r28 = (*(int (**)(void*))((char*)((*(void**)((char*)arg1 + 116))) + 188))(arg1);
    if (var_r28 > 0) {
        do {
            fn_033ec7ac(arg0, arg1, var_r27, arg2, 0);
            var_r28 -= 1;
            var_r27 += 1;
        } while (var_r28 != 0);
    }
}
