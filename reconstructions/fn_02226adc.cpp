extern "C" void fn_021e7098(void *);
extern "C" void fn_02b746c0(void *, float);
extern "C" float data_1005b0f8;

namespace {
struct Object {
    void *owner;
    char padding_4[8];
    char *table_c;
};
}

extern "C" void fn_02226adc(void *self)
{
    fn_021e7098(self);
    int result = (*(int (**)(void *))(((Object *)self)->table_c + 0x104))(self);
    if (result == 0) {
        fn_02b746c0(((Object *)self)->owner, data_1005b0f8);
    }
}
