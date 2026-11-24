extern "C" int fn_03089aac(void*);
extern "C" const float data_10219538;
extern "C" void* data_104637d4;

extern "C" unsigned char fn_02eab174(void* object)
{
    int result = 0;
    if (data_104637d4 != 0 && *(float*)((char*)object + 0x38) != data_10219538 && fn_03089aac(object) == 0) {
        result = 1;
    }
    return result;
}
