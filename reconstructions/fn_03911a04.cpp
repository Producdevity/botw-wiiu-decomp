extern "C" void fn_03911980(void*);

extern "C" void fn_03911a04(void* object)
{
    unsigned int flags = *(unsigned char*)object;
    flags &= ~1;
    *(unsigned char*)object = flags;
    fn_03911980(object);
}
