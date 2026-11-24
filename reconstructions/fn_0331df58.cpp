extern "C" int fn_03317670(void*, void*);

extern "C" void* data_1046d780;

extern "C" unsigned char fn_0331df58(void* arg0)
{
    int result = 0;
    if (data_1046d780 != 0 && fn_03317670(data_1046d780, *(void**)((char*)arg0 + 0xC)) != 0) {
        result = 1;
    }
    return result;
}
