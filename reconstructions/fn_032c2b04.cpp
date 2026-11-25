extern "C" void* fn_0308e578(unsigned size);
extern "C" int fn_037e5ec0(void*);

extern "C" void* fn_032c2b04(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x48)) != 0) {
        *(int*)((char*)self + 0x10) = 0;
        *(int*)((char*)self + 0x14) = 0;
        fn_037e5ec0((char*)self + 0x18);
    }
    return self;
}
