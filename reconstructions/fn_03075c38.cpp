extern "C" int fn_02ec812c(void*);

extern "C" void* data_10469a30;

extern "C" unsigned char fn_03075c38(void)
{
    int result = 0;
    if (data_10469a30 != 0 && fn_02ec812c(data_10469a30) != 0) {
        result = 1;
    }
    return result;
}
