extern "C" int fn_03f0b7cc(void*, void*, void*);

extern "C" void fn_03f0db30(void* object, void* arg1, void* arg2)
{
    int end = fn_03f0b7cc(object, arg1, arg2);
    char* self = (char*)object;
    *(int*)(self + 0x48) = end;
    *(int*)(self + 0x44) = end;
    int* length = (int*)(self + 0x40);
    *length = (short)((end - *(int*)self) >> 4);
}
