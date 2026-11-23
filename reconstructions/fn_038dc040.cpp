extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void fn_034d7e78(void*, void*);
extern "C" void* fn_038dbfbc(void*, int, int);

extern "C" void* fn_038dc040(int arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0x70U, arg1, 4);
    if (var_r31 != 0) {
        var_r31 = fn_038dbfbc(var_r31, arg0, 24);
    }
    fn_034d7e78(var_r31, arg1);
    return var_r31;
}
