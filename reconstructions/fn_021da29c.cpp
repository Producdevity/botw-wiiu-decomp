extern "C" void fn_021da62c(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100489f8;
extern "C" void fn_021da29c(void* self)
{
    long mode = 1;
    fn_021da62c(self);
    (*(int (**)(void*))(*(char**)((char*)self + 0x90) + 0x1C))((char*)self + 0x8C);
    fn_037946f0(self, *(int*)((char*)self + 0x8C), mode, 0, 0, data_100489f8);
}
