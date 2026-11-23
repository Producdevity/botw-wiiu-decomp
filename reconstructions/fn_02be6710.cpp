extern "C" float data_101bbabc;

extern "C" void fn_02be6710(void* object) {
    float value = data_101bbabc;
    *(float*)((char*)object + 132) = value;
    *(float*)((char*)object + 136) = value;
}
