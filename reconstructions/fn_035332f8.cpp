extern "C" void fn_03548860(void*);

extern "C" float data_102d9810;

namespace {
struct Object {
    char padding_0[0xC];
    char block_c[1];
    char padding_d[0x12B];
    int value_138;
    char padding_13c[0x30];
    int value_16c;
    int value_170;
    float value_174;
    float value_178;
};
}

extern "C" void fn_035332f8(void* object)
{
    fn_03548860(((Object *)object)->block_c);
    float value = data_102d9810;
    ((Object *)object)->value_170 = 0;
    ((Object *)object)->value_174 = value;
    ((Object *)object)->value_138 = 0;
    ((Object *)object)->value_178 = value;
    ((Object *)object)->value_16c = 0;
}
