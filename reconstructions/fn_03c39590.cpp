extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_03c39590(void* object)
{
    void* self = object;
    if (self != 0 || (self = fn_0308e578(0xC)) != 0) {
        *(int*)((char*)self + 0) = 0;
        *(int*)((char*)self + 4) = 0;
        *(int*)((char*)self + 8) = 0;
    }
}
