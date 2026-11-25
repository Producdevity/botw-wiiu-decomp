extern "C" void fn_02345624(void*, void*);
extern "C" bool fn_03713060(void*, unsigned, float, int);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1009882c;
extern "C" int data_10098830;

extern "C" void fn_02399398(void* self, void* arg)
{
    fn_037946f0(self, (int)&data_10098830, 0, 0, 0, data_1009882c);
    void* owner = *(void**)self;
    fn_03713060(*(void**)((char*)owner + 0x394), 9, *(float*)((char*)owner + 0x26c), 0);
    fn_02345624(self, arg);
    *(float*)((char*)self + 0x1c) = **(float**)((char*)self + 0x18);
}
