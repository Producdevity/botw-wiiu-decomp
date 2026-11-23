extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_034ba450(void*, int, int);
extern "C" void fn_034d7e78(void*, void*);

extern "C" void* fn_034ba4d4(int arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0x70U, arg1, 4);
    if (var_r31 != 0) {
        var_r31 = fn_034ba450(var_r31, arg0, 32);
    }
    fn_034d7e78(var_r31, arg1);
    return var_r31;
}
