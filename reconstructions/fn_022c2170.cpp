extern "C" int fn_022c0a18(void*);
extern "C" void* fn_02b16ef0(void *);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_022c2170(void **arg0) {
    void *temp_r3;

    if (fn_022c0a18(arg0) != 0) {
        temp_r3 = fn_037966a8(*arg0);
        if (temp_r3 != 0) {
            fn_02b16ef0(temp_r3);
        }
    }
}
