extern "C" float fn_02398b58(void* object)
{
    char* field = (char*)object + 148;
    float value = **(float**)((char*)object + 20);
    return value * *(float*)field;
}
