extern "C" int fn_0341b0ec(void* object)
{
    int value = *(int*)((char*)object + 0x64);
    return value == (*(int (**)(void*))((char*)*(void**)object + 0x24))(object);
}
