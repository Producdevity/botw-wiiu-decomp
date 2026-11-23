extern "C" const float data_10006b9c;

extern "C" int fn_02035ccc(void* * arg0) {
    void* temp_r3;
    void* temp_r3_2;

    temp_r3 = *arg0;
    temp_r3_2 = (*(void*(**)(void*))((char*)((*(void**)((char*)temp_r3 + 232))) + 780))(temp_r3);
    if ((temp_r3_2 != 0) && ((*(float*)((char*)temp_r3_2 + 384)) > data_10006b9c)) {
        return 1;
    }
    return 0;
}
