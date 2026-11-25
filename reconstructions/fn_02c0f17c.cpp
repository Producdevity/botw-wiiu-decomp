extern "C" bool fn_02c0f17c(void* object, int value)
{
    int flags = *(int*)object;
    return (flags & value) == 0;
}
