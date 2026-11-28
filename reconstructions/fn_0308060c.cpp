extern "C" int fn_02dbeeb0(void*);

extern "C" void* data_10464064;

extern "C" unsigned char fn_0308060c(void*)
{
    int result = 0;
    if (data_10464064 != 0 && fn_02dbeeb0(data_10464064) != 0) {
        result = 1;
    }
    return result;
}
