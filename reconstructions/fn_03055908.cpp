extern "C" int fn_02e8f654(void*);
extern "C" int fn_03089518(void);

extern "C" void* data_104698d0;

extern "C" unsigned char fn_03055908(void)
{
    int result = 0;
    if (fn_02e8f654(data_104698d0) != 0 && fn_03089518() == 0) {
        result = 1;
    }
    return result;
}
