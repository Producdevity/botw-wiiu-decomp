extern "C" void fn_02e91174(void*);
extern "C" void* fn_0308e578(unsigned size);
extern "C" unsigned char data_1021a870[];

extern "C" void* fn_02e97a4c(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x44)) != 0) {
        fn_02e91174(self);
        *((char*)self + 0x40) = 0;
        *(unsigned char**)((char*)self + 0x3c) = data_1021a870;
    }
    return self;
}
