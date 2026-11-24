extern "C" int fn_0366c52c(void);

extern "C" int fn_0366d3b8(void* arg0)
{
    unsigned int flags = *(unsigned char*)((char*)arg0 + 0x14);
    if ((flags >> 6) & 1) {
        return fn_0366c52c() + 0xA8;
    }
    return *(int*)((char*)*(void**)((char*)arg0 + 0x10) + 0x28);
}
