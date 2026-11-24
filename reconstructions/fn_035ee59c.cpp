extern "C" void fn_035ee59c(void* object)
{
    int flags = *(int*)((char*)object + 28) & ~6;
    int* slot = (int*)((char*)object + 28);
    *slot = flags;
}
