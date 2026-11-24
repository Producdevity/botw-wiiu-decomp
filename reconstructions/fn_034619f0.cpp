extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_102c8a5c;
extern "C" void* fn_034619f0(void* self, const void* value)
{
    if (self != 0 || (self = fn_0308e578(0x10)) != 0) {
        *(const void**)((char*)self + 0) = value;
        *(int**)((char*)self + 0xC) = &data_102c8a5c;
        *(int*)((char*)self + 4) = 0;
        *(int*)((char*)self + 8) = 0;
    }
    return self;
}
