extern "C" float fn_023b7dc8(void*, void*);
extern "C" float fn_023b7e30(void*);
extern "C" void fn_023b7e78(void*);

extern "C" void fn_023b7e98(void* self, void* arg)
{
    *((unsigned char*)self + 0xb) |= 4;
    float first = fn_023b7dc8(self, arg);
    *(float*)((char*)self + 0x78) = first;
    float second = fn_023b7e30(self);
    *(float*)((char*)self + 0x7c) = second;
    *((char*)self + 0x81) = 1;
    fn_023b7e78(self);
    *((char*)self + 0x80) = 0;
}
