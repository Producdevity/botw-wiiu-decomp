extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_1008d6b8;

extern "C" void* fn_023563dc(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x20)) != 0) {
        fn_0379468c(self, source);
        char* list = (char*)self + 0x10;
        *(int**)((char*)self + 0xC) = &data_1008d6b8;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        *(unsigned char*)((char*)self + 0x1C) = 0;
    }
    return self;
}
