extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02898410(void* storage, const void* source);
extern "C" int data_1014f29c;

extern "C" void* fn_0288f09c(void* self, const void* source)
{
    if (self != 0 || (self = fn_0308e578(0x3C)) != 0) {
        fn_02898410(self, source);
        char* list = (char*)self + 0x2C;
        *(int**)((char*)self + 0xC) = &data_1014f29c;
        if (list != 0 || (list = (char*)fn_0308e578(0xC)) != 0) {
            *(int*)(list + 0) = 0;
            *(int*)(list + 4) = 0;
            *(int*)(list + 8) = 0;
        }
        *(unsigned char*)((char*)self + 0x38) = 0;
    }
    return self;
}
