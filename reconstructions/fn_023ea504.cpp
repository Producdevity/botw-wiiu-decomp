extern "C" void fn_023e93c0(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a6f50;
extern "C" void fn_023ea504(void* self)
{
    long mode = 1;
    fn_023e93c0(self);
    (*(int (**)(void*))(*(char**)((char*)self + 0x58) + 0x1C))((char*)self + 0x54);
    fn_037946f0(self, *(int*)((char*)self + 0x54), mode, 0, 0, data_100a6f50);
}
