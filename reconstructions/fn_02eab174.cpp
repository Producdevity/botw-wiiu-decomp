extern "C" int fn_03089aac(void*);
extern "C" const float data_10219538;
extern "C" void* data_104637d4;

namespace {
struct Object {
    char padding_0[0x38];
    float value;
};
}

extern "C" unsigned char fn_02eab174(void* object)
{
    int result = 0;
    if (data_104637d4 != 0 && ((Object *) object)->value != data_10219538 && fn_03089aac(object) == 0) {
        result = 1;
    }
    return result;
}
