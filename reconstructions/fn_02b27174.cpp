typedef int s32;

extern "C" void fn_031e28f0(void*, void*);
extern "C" int data_1046d3ac;

extern "C" void fn_02b27174(void *arg0) {
    void *temp_r3;
    void *temp_r4;

    temp_r4 = (*(void **)((char *)(arg0) + (0x16C)));
    if ((temp_r4 != 0) && ((s32) data_1046d3ac != 0)) {
        temp_r3 = (*(void **)((char *)(data_1046d3ac) + (0x175C4)));
        if (temp_r3 != 0) {
            fn_031e28f0(temp_r3, temp_r4);
            (*(void **)((char *)(arg0) + (0x16C))) = 0;
        }
    }
}
