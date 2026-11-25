extern "C" bool fn_03300274(void* object, int value)
{
    unsigned short* flags = (unsigned short*)object;
    unsigned short bits = *flags;
    return (bits & value) == 0;
}
