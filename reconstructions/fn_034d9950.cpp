extern "C" void* fn_0308e5a0(unsigned size, void* heap, int alignment);
extern "C" void* fn_034d98f8(void*, void*);
extern "C" void fn_0406f4b8(int, void*);

extern "C" void* fn_034d9950(void* arg0, void* arg1) {
    void* var_r31;

    var_r31 = fn_0308e5a0(0xCU, arg0, 4);
    if (var_r31 != 0) {
        var_r31 = fn_034d98f8(var_r31, arg1);
    }
    fn_0406f4b8((*(int*)((char*)arg1 + 92)), var_r31);
    return var_r31;
}
