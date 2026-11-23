extern "C" void* fn_02e5b564();

extern "C" void fn_02befe5c(void* arg0) {
    void* temp_r3;

    temp_r3 = fn_02e5b564();
    if (temp_r3 != 0) {
        (*(float*)((char*)arg0 + 40)) = (float) (*(float*)((char*)temp_r3 + 516));
        (*(float*)((char*)arg0 + 44)) = (float) (*(float*)((char*)temp_r3 + 532));
        (*(float*)((char*)arg0 + 48)) = (float) (*(float*)((char*)temp_r3 + 548));
        (*(float*)((char*)arg0 + 52)) = (float) (*(float*)((char*)temp_r3 + 700));
        (*(float*)((char*)arg0 + 56)) = (float) (*(float*)((char*)temp_r3 + 704));
        (*(float*)((char*)arg0 + 60)) = (float) (*(float*)((char*)temp_r3 + 708));
    }
}
