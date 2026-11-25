extern "C" void* fn_0283417c(void* storage, const void* source);
extern "C" void fn_02b4d8c8(void*);
extern "C" void fn_02b4eb0c(void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" int data_10142134;

extern "C" void* fn_0283810c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x45C)) != 0) {
        fn_0283417c(self, source);
        char* list = (char*)self + 0x50;
        *(int**)((char*)self + 0xC) = &data_10142134;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        fn_02b4eb0c((char*)self + 0x5C);
        fn_02b4d8c8((char*)self + 0x2F8);
        *(unsigned char*)((char*)self + 0x458) = 0;
    }
    return self;
}
