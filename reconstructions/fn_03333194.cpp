extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_03332ac4(void*);
extern "C" void fn_03332e54(void*, int, void*);

extern "C" void* fn_03333194(int arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0x128U, arg1, 4);
    if (var_r31 != 0) {
        var_r31 = fn_03332ac4(var_r31);
    }
    fn_03332e54(var_r31, arg0, arg1);
    return var_r31;
}
