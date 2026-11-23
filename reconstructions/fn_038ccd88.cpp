extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_038ccb44();
extern "C" void fn_038ccc88(void*, void*);

extern "C" void* fn_038ccd88(void* arg0) {
    void* temp_r3;
    void* var_r31;

    temp_r3 = fn_0308e5a0(0xA8U, arg0, 4);
    var_r31 = temp_r3;
    if (temp_r3 != 0) {
        var_r31 = fn_038ccb44();
    }
    fn_038ccc88(var_r31, arg0);
    return var_r31;
}
