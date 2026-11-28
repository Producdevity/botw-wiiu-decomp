extern "C" int fn_0247ddfc();
extern "C" int fn_0247df20();
extern "C" void fn_0247e790(int, int, int, int);
extern "C" void fn_028494ac(void*, int);
extern "C" void fn_02c4fe90();

namespace {
struct Object {
    int id;
    char padding_4[0x4C];
    unsigned char *flag;
};
}

extern "C" void fn_0284af10(void* object, int param) {
    Object *self = (Object *)object;

    fn_02c4fe90();
    int second = fn_0247df20();
    fn_0247e790(self->id, second, fn_0247ddfc(), *self->flag);
    fn_028494ac(object, param);
}
