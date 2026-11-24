extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03f923b8(void* self, int first, int second)
{
    if (self != 0 || (self = fn_0308e578(8)) != 0) {
        *(int*)((char*)self + 0) = first;
        *(int*)((char*)self + 4) = second;
    }
}
