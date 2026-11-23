extern "C" const float data_102c7dac;
extern "C" void fn_03451650(int);

extern "C" void fn_0344f2c0(void* arg0, void* arg1) {
    fn_03451650((*(int*)((char*)arg0 + 28)));
    if (((*(float*)arg1) != data_102c7dac) || ((*(float*)((char*)arg1 + 4)) != data_102c7dac) || ((*(float*)((char*)arg1 + 8)) != data_102c7dac)) {
        (*(unsigned short*)((char*)arg0 + 228)) = (unsigned short) ((*(unsigned short*)((char*)arg0 + 228)) | 32);
    }
}
