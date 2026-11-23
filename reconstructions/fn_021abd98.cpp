extern "C" int fn_035fda08(void*);
extern "C" void fn_035ff004(void*);
extern "C" void* data_1047b054;

extern "C" void fn_021abd98(void) {
    void *temp_r31;

    temp_r31 = data_1047b054;
    if ((temp_r31 != 0) && (fn_035fda08(temp_r31) != 0)) {
        fn_035ff004(temp_r31);
    }
}
