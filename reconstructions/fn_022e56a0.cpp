extern "C" float fn_022e56a0(void* object)
{
    char** source = (char**)((char*)object + 16);
    float value = *(float*)*source;
    return *(float*)((char*)object + 96) + value;
}
