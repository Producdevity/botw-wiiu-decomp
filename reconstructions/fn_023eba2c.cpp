extern "C" void fn_023ea8b8(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a728c;
extern "C" void fn_023eba2c(void* self)
{
    long mode = 1;
    fn_023ea8b8(self);
    (*(int (**)(void*))(*(char**)((char*)self + 0x70) + 0x1C))((char*)self + 0x6C);
    fn_037946f0(self, *(int*)((char*)self + 0x6C), mode, 0, 0, data_100a728c);
}
