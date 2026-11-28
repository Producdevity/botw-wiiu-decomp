extern "C" int fn_04289ac8(void* object, int mask)
{
    int bits = *(unsigned char*)object;
    int masked = bits & mask;
    return masked & 0xff;
}
