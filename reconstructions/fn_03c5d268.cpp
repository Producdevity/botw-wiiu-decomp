extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03c5d268(void* self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        *(int*)((char*)self + 0) = value;
        *(int*)((char*)self + 4) = 0;
        *(int*)((char*)self + 8) = -1;
        *(int*)((char*)self + 0xC) = -1;
    }
}
