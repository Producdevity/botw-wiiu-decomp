extern "C" void fn_03195b04();

extern "C" void fn_021cde48(void* * arg0) {
    void* temp_r3;
    void* temp_r3_2;
    void* temp_r3_3;

    temp_r3 = *arg0;
    temp_r3_2 = (*(void*(**)(void*))((char*)((*(void**)((char*)temp_r3 + 232))) + 1052))(temp_r3);
    if (temp_r3_2 != 0) {
        (*(int*)((char*)temp_r3_2 + 256)) = 512;
    }
    temp_r3_3 = *arg0;
    if ((*(int (**)(void*))((char*)((*(void**)((char*)temp_r3_3 + 232))) + 780))(temp_r3_3) != 0) {
        fn_03195b04();
    }
}
