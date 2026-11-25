extern "C" void fn_03a3b258(unsigned value, void* object, void* other)
{
    *(unsigned short*)object = 0;
    unsigned short* field = (unsigned short*)other;
    *field = 0;
}
