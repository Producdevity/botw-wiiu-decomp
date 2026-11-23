extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_0334a854(void*, int);
extern "C" void fn_0334af84(void*, void*);

extern "C" void* fn_0334b1fc(int arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0x1D0U, arg1, 4);
    if (var_r31 != 0) {
        var_r31 = fn_0334a854(var_r31, arg0);
    }
    fn_0334af84(var_r31, arg1);
    return var_r31;
}
