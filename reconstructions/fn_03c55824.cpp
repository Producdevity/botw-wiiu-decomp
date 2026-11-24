extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_03c55824(void* object)
{
    void* self = object;
    if (self != 0 || (self = fn_0308e578(8)) != 0) {
        *(char*)((char*)self + 0) = 0;
        *(char*)((char*)self + 1) = 0;
        *(int*)((char*)self + 4) = 0;
    }
}
