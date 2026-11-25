extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_101a7e34;
extern "C" int data_101a7e44;

extern "C" void fn_02adbe74(void* self)
{
    if (self != 0 || (self = fn_0308e578(24)) != 0) {
        *(int**)((char*)self + 0x14) = &data_101a7e34;
        *(int**)((char*)self + 0x10) = &data_101a7e44;
    }
}
