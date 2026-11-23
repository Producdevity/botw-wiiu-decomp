extern "C" void fn_0308eacc(void*, int, void*, int);
extern "C" void fn_03bc7400(void*, void*, int);

extern "C" void fn_03bc74a8(void* arg0, int* arg1, int arg2) {
    int var_r4;

    var_r4 = *arg1;
    if (var_r4 <= 0) {
        var_r4 = 1;
    }
    fn_0308eacc((char*)arg0 + 4, var_r4, (void*)(arg2), 4);
    fn_03bc7400(arg0, arg1, arg2);
}
