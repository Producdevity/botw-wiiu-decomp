extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_0369fff8(void*);
extern "C" unsigned char data_103048cc[];

extern "C" void* fn_036a0504(void* self)
{
    void* object = self;
    if (object != 0 || (object = fn_0308e578(0x18)) != 0) {
        fn_0369fff8(object);
        *(unsigned char**)((char*)object + 0x10) = data_103048cc;
        *(int*)((char*)object + 0x14) = 10;
    }
    return object;
}
