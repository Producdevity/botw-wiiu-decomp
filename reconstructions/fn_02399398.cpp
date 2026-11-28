extern "C" void fn_02345624(void*, void*);
extern "C" bool fn_03713060(void*, unsigned, float, int);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_1009882c;
extern "C" int data_10098830;

namespace {
struct Owner {
    char padding_0[0x26C];
    float value_26c;
    char padding_270[0x124];
    void *target;
};

struct Object {
    Owner *owner;
    char padding_4[0x14];
    float *source;
    float value_1c;
};
}

extern "C" void fn_02399398(void* self, void* arg)
{
    fn_037946f0(self, (int)&data_10098830, 0, 0, 0, data_1009882c);
    Owner* owner = ((Object *)self)->owner;
    fn_03713060(owner->target, 9, owner->value_26c, 0);
    fn_02345624(self, arg);
    ((Object *)self)->value_1c = *((Object *)self)->source;
}
