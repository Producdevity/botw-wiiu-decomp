extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03462b48(void*);
extern "C" void fn_03462bcc(void*, int, void*);

extern "C" void* fn_03462cec(int arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0x3CU, arg1, 4);
    if (var_r31 != 0) {
        var_r31 = fn_03462b48(var_r31);
    }
    fn_03462bcc(var_r31, arg0, arg1);
    return var_r31;
}
