extern "C" int fn_02b0bd8c(void*);
extern "C" int fn_0201bed0(void* self)
{
    unsigned int flags = *(unsigned int*)((char*)self + 0xA0C) >> 0x15;
    if ((flags & 1) != 0) {
        return 1;
    }
    void* target = *(void**)((char*)self + 0x550);
    if (target != 0 && fn_02b0bd8c(target) != 0) {
        return 1;
    }
    return 0;
}
