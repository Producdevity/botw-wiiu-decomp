extern "C" int fn_035fda08(void*);
extern "C" void fn_035ff004(void*);
extern "C" void* data_1047b054;

extern "C" void fn_021abd98(void) {
    void *manager = data_1047b054;
    if ((manager != 0) && (fn_035fda08(manager) != 0)) {
        fn_035ff004(manager);
    }
}
