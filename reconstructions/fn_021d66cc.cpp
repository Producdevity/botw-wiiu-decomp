extern "C" void fn_021d5860(void*);
extern "C" void fn_02b62e04(void*);
extern "C" float data_1004770c;
extern "C" void fn_021d66cc(void* self)
{
    void* object = self;
    int offset = 0xA0;
    char* flag = (char*)self + 0xA8;
    float value = **(float**)((char*)object + 0x94);
    *(float*)((char*)self + 0xA4) = data_1004770c;
    *(float*)((char*)self + offset) = value;
    if (self != 0) {
        *flag = 0;
    }
    *(float*)((char*)self + 0x9C) = value;
    fn_021d5860(self);
    fn_02b62e04(*(void**)((char*)self + 0));
}
