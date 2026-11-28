extern "C" float fn_023b7dc8(void*, void*);
extern "C" float fn_023b7e30(void*);
extern "C" void fn_023b7e78(void*);

namespace {
struct Object {
    unsigned char padding_0[0xB];
    unsigned char flags;
    unsigned char padding_c[0x6C];
    float value_78;
    float value_7c;
    char value_80;
    char value_81;
};
}

extern "C" void fn_023b7e98(void* self, void* arg)
{
    ((Object*)self)->flags |= 4;
    float first = fn_023b7dc8(self, arg);
    ((Object*)self)->value_78 = first;
    float second = fn_023b7e30(self);
    ((Object*)self)->value_7c = second;
    ((Object*)self)->value_81 = 1;
    fn_023b7e78(self);
    ((Object*)self)->value_80 = 0;
}
