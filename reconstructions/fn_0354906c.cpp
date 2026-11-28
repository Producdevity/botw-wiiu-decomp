extern "C" void fn_0354ebac(void *);
extern "C" void fn_03bb6048(int);

namespace {
struct Object {
    char padding_0[0x6C];
    int value_6c;
    char padding_70[0xB2];
    unsigned char flag_122;
};
}

extern "C" void fn_0354906c(void *object)
{
    fn_03bb6048((int)object + 0xEC);
    fn_0354ebac(object);
    if (((Object *)object)->value_6c == 0) {
        ((Object *)object)->flag_122 = 0;
    }
}
