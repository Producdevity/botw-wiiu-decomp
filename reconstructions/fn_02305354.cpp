extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1007f3f8;
extern "C" void fn_02305354(void* self)
{
    char* vtable = *(char**)((char*)self + 0x78);
    if (self != 0) {
        (*(void (**)(void*))(vtable + 0x1C))((char*)self + 0x74);
        fn_037946f0(self, *(int*)((char*)self + 0x74), 1, 0, 0, data_1007f3f8);
    }
}
