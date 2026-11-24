extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1003a844;
extern "C" void fn_0218e3d4(void* self)
{
    char* vtable = *(char**)((char*)self + 0x24);
    if (self != 0) {
        (*(void (**)(void*))(vtable + 0x1C))((char*)self + 0x20);
        fn_037946f0(self, *(int*)((char*)self + 0x20), 1, 0, 0, data_1003a844);
    }
}
