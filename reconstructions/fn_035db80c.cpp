extern "C" int fn_03173b80(void*);

extern "C" void* data_1046ce48;

extern "C" unsigned char fn_035db80c(void)
{
    int result = 1;
    if (data_1046ce48 != 0 && fn_03173b80(data_1046ce48) != 0) {
        result = 0;
    }
    return result;
}
