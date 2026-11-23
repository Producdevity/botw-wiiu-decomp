extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_0308eee4(int, int);
extern "C" void* fn_030d3cc4();

extern "C" void* fn_030d72a0(void* arg0, void* arg1) {
    void* temp_r3;
    void* var_r31;
    void* var_r4;

    var_r4 = arg1;
    if (var_r4 == 0) {
        var_r4 = (*(void**)((char*)arg0 + 132));
    }
    temp_r3 = fn_0308e5a0(0x8CU, var_r4, 4);
    var_r31 = temp_r3;
    if (temp_r3 != 0) {
        var_r31 = fn_030d3cc4();
    }
    fn_0308eee4((int)(arg0), (int)(var_r31));
    return var_r31;
}
