extern "C" void fn_02950880(int handle);
extern "C" void* fn_02b757a8(int handle);
extern "C" void fn_0318f2f4(void* object, float* value, int flag);
extern "C" float data_10178c88;

extern "C" void fn_029af048(int* handle) {
    float value;
    void* object = fn_02b757a8(*handle);
    if (object != 0) {
        fn_02950880(*handle);
        value = data_10178c88;
        fn_0318f2f4(object, &value, 0);
        *(float*)((char*)object + 0x70) = *(float*)((char*)object + 0x6C);
        *(float*)((char*)object + 0x78) = *(float*)((char*)object + 0x74);
    }
}
