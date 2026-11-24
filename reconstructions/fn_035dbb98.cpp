extern "C" int fn_03173bc8(void*);

extern "C" void* data_1046ce48;

extern "C" unsigned char fn_035dbb98(void)
{
    int result = 1;
    if (data_1046ce48 != 0 && fn_03173bc8(data_1046ce48) == 0) {
        result = 0;
    }
    return result;
}
