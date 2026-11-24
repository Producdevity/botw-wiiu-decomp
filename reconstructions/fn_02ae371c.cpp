extern "C" void* fn_02af8fd8(void*);

extern "C" unsigned char fn_02ae371c(void* object)
{
    void* target;
    int invalid = ((*(unsigned char*)((char*)object + 0xD8) >> 3) & 1) || ((target = fn_02af8fd8(object)) == 0);
    if (invalid) {
        return 0;
    }
    return *(unsigned char*)((char*)target + 0x7DC);
}
