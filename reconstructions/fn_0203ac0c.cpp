extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10007b54;
extern "C" void fn_0203ac0c(void* self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        *(int*)((char*)self + 0) = value;
        *(int**)((char*)self + 4) = &data_10007b54;
        *(int*)((char*)self + 8) = 0;
        *(int*)((char*)self + 0xC) = 0;
    }
}
