extern "C" void fn_02438238(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100b542c;
extern "C" void fn_0243bbe4(void* self)
{
    long mode = 1;
    fn_02438238(self);
    (*(int (**)(void*))(*(char**)((char*)self + 0x64) + 0x1C))((char*)self + 0x60);
    fn_037946f0(self, *(int*)((char*)self + 0x60), mode, 0, 0, data_100b542c);
}
