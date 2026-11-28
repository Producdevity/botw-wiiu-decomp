extern "C" void fn_02b57428(void *, void *, void *, void *);
extern "C" void fn_02b57808(void);
extern "C" void fn_02b5794c(void);
extern "C" float data_101af6a0;

namespace {
struct Object {
    char padding_0[4];
    char flag_4;
    char flag_5;
    char padding_6[2];
    void *first;
    char padding_C[0x21C];
    void *second;
    void *third;
    char padding_230[4];
    float value_234;
    float value_238;
};
}

extern "C" void fn_02b57a7c(void *self, void *first, void *second, void *third)
{
    ((Object *)self)->second = second;
    ((Object *)self)->first = first;
    ((Object *)self)->third = third;
    ((Object *)self)->flag_4 = 0;
    ((Object *)self)->flag_5 = 0;
    fn_02b57428(self, first, second, third);
    fn_02b57808();
    fn_02b5794c();
    ((Object *)self)->value_238 = data_101af6a0;
    ((Object *)self)->value_234 = data_101af6a0;
}
