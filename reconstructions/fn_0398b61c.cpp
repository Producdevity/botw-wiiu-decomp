extern "C" void* fn_0308e578(unsigned size);

extern "C" void fn_0398b61c(void* self)
{
    if (self != 0 || (self = fn_0308e578(0xC)) != 0) {
        *(int*)((char*)self + 0) = 4;
        *(int*)((char*)self + 4) = 4;
        *(int*)((char*)self + 8) = 0;
    }
}
