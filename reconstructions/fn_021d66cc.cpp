extern "C" void fn_021d5860(void*);
extern "C" void fn_02b62e04(void*);
extern "C" float data_1004770c;

namespace {
struct Object {
    void *owner;
    char padding_4[0x90];
    float *source;
    char padding_98[4];
    float value_9C;
    float value_A0;
    float value_A4;
    char active;
};
}

extern "C" void fn_021d66cc(void* self)
{
    float value = *((Object *)self)->source;
    ((Object *)self)->value_A4 = data_1004770c;
    ((Object *)self)->value_A0 = value;
    if (self != 0) {
        ((Object *)self)->active = 0;
    }
    ((Object *)self)->value_9C = value;
    fn_021d5860(self);
    fn_02b62e04(((Object *)self)->owner);
}
