extern "C" void* fn_037966a8(void*);
extern "C" float data_1031a794;
namespace {
struct Target {
    char padding_0[0xE6];
    unsigned short flags;
    char padding_e8[0xE4];
    float value;
};
}
extern "C" float fn_03799940(void* object)
{
    void* found = fn_037966a8(object);
    Target* target = (Target*)found;
    int useDefault = target == 0 || !((target->flags >> 2) & 1);
    if (useDefault) {
        return data_1031a794;
    }
    return target->value;
}
