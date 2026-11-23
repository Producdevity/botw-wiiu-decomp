extern "C" void* fn_02674b30();

extern "C" int fn_02674ee8(int arg0, void* arg1) {
    void* temp_r3;

    temp_r3 = fn_02674b30();
    if (temp_r3 != 0) {
        (*(float*)arg1) = (float) (*(float*)((char*)temp_r3 + 60));
        (*(float*)((char*)arg1 + 4)) = (float) (*(float*)((char*)temp_r3 + 64));
        (*(float*)((char*)arg1 + 8)) = (float) (*(float*)((char*)temp_r3 + 68));
        return 1;
    }
    return 0;
}
