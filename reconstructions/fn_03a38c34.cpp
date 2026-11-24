extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03a38c34(void* self, int first, int second)
{
    if (self != 0 || (self = fn_0308e578(8)) != 0) {
        *(int*)((char*)self + 0) = second;
        *(int*)((char*)self + 4) = first;
    }
}
