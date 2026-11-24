extern "C" int fn_03cacab4(void*, void*);

extern "C" int fn_03caccb0(void* object, void* target)
{
    void* value = target;
    int result = fn_03cacab4(object, value);
    if (result != 0) {
        return result;
    }
    *(void**)((char*)object + 0x18) = value;
    return 0;
}
