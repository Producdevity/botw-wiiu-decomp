extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_10020834;
extern "C" void fn_020fd44c(void* self)
{
    char* vtable = *(char**)((char*)self + 0xA4);
    if (self != 0) {
        (*(void (**)(void*))(vtable + 0x1C))((char*)self + 0xA0);
        fn_037946f0(self, *(int*)((char*)self + 0xA0), 1, 0, 0, data_10020834);
    }
}
