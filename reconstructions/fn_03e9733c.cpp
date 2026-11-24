extern "C" int fn_03e9733c(void* object, int mask)
{
    int bits = *(unsigned char*)object;
    int masked = bits & mask;
    return masked & 0xff;
}
