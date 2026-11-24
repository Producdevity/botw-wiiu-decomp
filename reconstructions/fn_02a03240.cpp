extern "C" bool fn_031ca674(void*);
extern "C" int data_1046d3ac;
extern "C" void* data_1047c244;

extern "C" unsigned char fn_02a03240(void)
{
    int result = 1;
    if (*(signed char*)((char*)data_1047c244 + 0x113) == 0 && fn_031ca674((void*)data_1046d3ac) == 0) {
        result = 0;
    }
    return result;
}
