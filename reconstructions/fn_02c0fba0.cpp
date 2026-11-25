extern "C" bool fn_02c0fba0(void* object, int value)
{
    int flags = *(int*)object;
    return (flags & value) == 0;
}
