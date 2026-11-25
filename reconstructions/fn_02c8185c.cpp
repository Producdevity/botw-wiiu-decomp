extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c6430c(void* storage, const void* source);
extern "C" int data_101cd010;

extern "C" void* fn_02c8185c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x24)) != 0) {
        fn_02c6430c(self, source);
        char* list = (char*)self + 0x14;
        *(int**)((char*)self + 0xC) = &data_101cd010;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        *(int*)((char*)self + 0x20) = 0;
    }
    return self;
}
