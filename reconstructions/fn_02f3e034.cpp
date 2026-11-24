extern "C" int fn_02e90380(void*, int);

extern "C" void* data_104698d0;
extern "C" int data_10469d58;

extern "C" unsigned char fn_02f3e034(void)
{
    int result = 1;
    if (data_10469d58 != 1 && fn_02e90380(data_104698d0, 2) == 0) {
        result = 0;
    }
    return result;
}
