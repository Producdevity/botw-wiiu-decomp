extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_10080590;
extern "C" void fn_0230868c(void* self)
{
    char* vtable = *(char**)((char*)self + 0x7C);
    if (self != 0) {
        (*(void (**)(void*))(vtable + 0x1C))((char*)self + 0x78);
        fn_037946f0(self, *(int*)((char*)self + 0x78), 1, 0, 0, data_10080590);
    }
}
