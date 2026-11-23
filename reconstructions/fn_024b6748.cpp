extern "C" void* fn_02c19904(void* context, int index);

extern "C" int fn_024b6748(void* arg0, void* arg1) {
    void* temp_r3;

    if ((int) (*(int*)((char*)arg0 + 64)) == 1) {
        temp_r3 = fn_02c19904((*(void**)((char*)arg0 + 8)), 0);
        if (temp_r3 != 0) {
            (*(float*)arg1) = (float) (*(float*)((char*)temp_r3 + 12));
            (*(float*)((char*)arg1 + 4)) = (float) (*(float*)((char*)temp_r3 + 16));
            (*(float*)((char*)arg1 + 8)) = (float) (*(float*)((char*)temp_r3 + 20));
            return 1;
        }
    }
    return 0;
}
