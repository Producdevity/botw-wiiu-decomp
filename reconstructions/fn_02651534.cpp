extern "C" int fn_02b74af0(void*);
extern "C" int fn_02b74b98(void*);

extern "C" unsigned char fn_02651534(void** object)
{
    void* target = *object;
    int result = 1;
    if (fn_02b74b98(target) == 0 && fn_02b74af0(target) == 0) {
        result = 0;
    }
    return result;
}
