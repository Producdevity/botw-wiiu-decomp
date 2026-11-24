extern "C" int fn_02e90380(void*, int);

extern "C" void* data_104698d0;
extern "C" int data_1046a560;

extern "C" unsigned char fn_02f70954(void)
{
    int result = 1;
    if (data_1046a560 != 1 && fn_02e90380(data_104698d0, 3) == 0) {
        result = 0;
    }
    return result;
}
