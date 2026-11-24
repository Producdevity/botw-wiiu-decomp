extern "C" float fn_02912eb4(void*);

extern "C" int fn_02912fac(void* object)
{
    int result = !(fn_02912eb4(object) > **(float**)((char*)object + 0x20));
    return result;
}
