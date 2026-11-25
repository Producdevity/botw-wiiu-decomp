extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10336ff0;
extern "C" int data_10337030;

extern "C" void fn_03901d14(void* self)
{
    if (self != 0 || (self = fn_0308e578(8)) != 0) {
        *(int**)self = &data_10336ff0;
        *(int**)((char*)self + 4) = &data_10337030;
    }
}
