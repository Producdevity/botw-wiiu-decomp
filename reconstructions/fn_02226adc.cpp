extern "C" void fn_021e7098(void*);
extern "C" void fn_02b746c0(void*, float);
extern "C" float data_1005b0f8;
extern "C" void fn_02226adc(void* self)
{
    fn_021e7098(self);
    int result = (*(int (**)(void*))(*(char**)((char*)self + 0xC) + 0x104))(self);
    if (result == 0) {
        fn_02b746c0(*(void**)((char*)self + 0), data_1005b0f8);
    }
}
