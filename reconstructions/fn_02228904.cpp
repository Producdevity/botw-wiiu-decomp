extern "C" void fn_021f5de0(void*, const void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_1005ba50;

extern "C" void* fn_02228904(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x38)) != 0) {
        fn_021f5de0(self, source);
        char* list = (char*)self + 0x28;
        *(int**)((char*)self + 0xC) = &data_1005ba50;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        *(unsigned char*)((char*)self + 0x34) = 0;
    }
    return self;
}
