extern "C" bool fn_03170968(void* object, int mask)
{
    int flags = *(int*)((char*)object + 60);
    return (flags & mask) != 0;
}
