extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10325038;
extern "C" void fn_03839618(void* self, int value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        *(int*)((char*)self + 4) = value;
        *(int**)((char*)self + 0) = &data_10325038;
        *(int*)((char*)self + 8) = 0;
        *(int*)((char*)self + 0xC) = 0;
    }
}
