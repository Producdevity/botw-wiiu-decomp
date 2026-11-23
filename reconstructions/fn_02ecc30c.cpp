extern "C" float data_1021c894;
extern "C" char* data_10463798;
extern "C" unsigned char fn_02a2c0d4(void* p);
extern "C" float fn_02a2c410(void* p);

extern "C" void fn_02ecc30c(void* arg0) {
    if (fn_02a2c0d4((void*)(data_10463798)) != 0) {
        (*(float*)((char*)arg0 + 192)) = (float) -fn_02a2c410((void*)(data_10463798));
        return;
    }
    (*(float*)((char*)arg0 + 192)) = (float) data_1021c894;
}
