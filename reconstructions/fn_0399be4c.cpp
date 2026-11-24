extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_0399be4c(void* object, int value)
{
    void* self = object;
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        *(int*)((char*)self + 0) = value;
        *(int*)((char*)self + 8) = 0;
        *(int*)((char*)self + 0xC) = 0;
    }
}
