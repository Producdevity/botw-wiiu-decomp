extern "C" void fn_03548860(void*);

extern "C" float data_102d9810;

extern "C" void fn_035332f8(void* object)
{
    fn_03548860((char*)object + 0xC);
    float value = data_102d9810;
    *(int*)((char*)object + 0x170) = 0;
    *(float*)((char*)object + 0x174) = value;
    *(int*)((char*)object + 0x138) = 0;
    *(float*)((char*)object + 0x178) = value;
    *(int*)((char*)object + 0x16C) = 0;
}
