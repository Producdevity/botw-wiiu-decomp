extern "C" void* fn_0330c2b0(int);
extern "C" void fn_0378a24c(void*, void*);
extern "C" int fn_0378dce8(int, void*, void*);

extern "C" void fn_02c671f0(int* arg0) {
    int temp_r3_3;
    void* temp_r3;
    void* temp_r3_2;

    temp_r3 = fn_0330c2b0(*arg0);
    if (temp_r3 != 0) {
        temp_r3_2 = (*(void*(**)())((char*)((*(void**)((char*)temp_r3 + 232))) + 1052))();
        if (temp_r3_2 != 0) {
            temp_r3_3 = (*(int (**)())((char*)((*(void**)((char*)temp_r3_2 + 252))) + 324))();
            if (temp_r3_3 != 0) {
                fn_0378dce8(temp_r3_3 + 1352, 0, 0);
                fn_0378a24c((void*)(temp_r3_3), 0);
            }
        }
    }
}
