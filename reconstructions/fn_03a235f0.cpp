extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_03a235e0(void);

extern "C" char data_1035ad38;

extern "C" void fn_03a235f0(void* object)
{
    void* self = object;
    if (self != 0 || (self = fn_0308e578(0xC)) != 0) {
        *(int*)((char*)self + 0) = -1;
        *(short*)((char*)self + 4) = -1;
        *(void**)((char*)self + 8) = &data_1035ad38;
        fn_03a235e0();
    }
}
