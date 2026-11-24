extern "C" void fn_023e8e08(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a6ac4;
extern "C" void fn_023e8a60(void* self)
{
    long mode = 1;
    fn_023e8e08(self);
    (*(int (**)(void*))(*(char**)((char*)self + 0x84) + 0x1C))((char*)self + 0x80);
    fn_037946f0(self, *(int*)((char*)self + 0x80), mode, 0, 0, data_100a6ac4);
}
