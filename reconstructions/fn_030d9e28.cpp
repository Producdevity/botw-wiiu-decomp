extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0434c000(void* dst, int value, unsigned size);
extern "C" void* fn_030d9e28(void* self)
{
    if (self != 0 || (self = fn_0308e578(0xAC8)) != 0) {
        *(int*)((char*)self + 0xAC0) = 0;
        *(int*)((char*)self + 0xAC4) = -2;
        fn_0434c000(self, 0, 0xAC0);
    }
    return self;
}
