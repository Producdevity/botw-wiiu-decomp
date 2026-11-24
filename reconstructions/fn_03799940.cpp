extern "C" void* fn_037966a8(void*);

extern "C" float data_1031a794;

extern "C" float fn_03799940(void* object)
{
    void* target = fn_037966a8(object);
    char* base = (char*)target;
    int useDefault = target == 0 || !((*(unsigned short*)((char*)target + 0xE6) >> 2) & 1);
    if (useDefault) {
        return data_1031a794;
    }
    return *(float*)(base + 0x1CC);
}
