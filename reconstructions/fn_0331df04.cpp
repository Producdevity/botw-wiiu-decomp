extern "C" int fn_03314cd4(void*, void*);

extern "C" void* data_1046d780;

extern "C" unsigned char fn_0331df04(void* object)
{
    int result = 0;
    if (data_1046d780 != 0 && fn_03314cd4(data_1046d780, *(void**)((char*)object + 0xC)) != 0) {
        result = 1;
    }
    return result;
}
