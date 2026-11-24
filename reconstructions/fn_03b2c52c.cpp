extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_03b2c52c(void* object, int value)
{
    void* self = object;
    if (self != 0 || (self = fn_0308e578(0xC)) != 0) {
        *(int*)((char*)self + 4) = 0;
        *(int*)((char*)self + 8) = value;
        *(int*)((char*)self + 0) = 0;
    }
}
