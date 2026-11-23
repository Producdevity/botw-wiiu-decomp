extern "C" float data_103dc08c;

extern "C" float fn_03c385dc(void* object, float x) {
    float value = data_103dc08c;
    *(float*)((char*)object + 268) = x >= 0.0f ? x : value;
    return x >= 0.0f ? x : value;
}
