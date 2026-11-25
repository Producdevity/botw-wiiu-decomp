extern "C" void fn_02b0d858(void* object)
{
    int value = 0;
    *(unsigned char*)((char*)object + 28) = value;
    *(unsigned short*)object = value;
}
