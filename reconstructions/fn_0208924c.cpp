extern "C" void fn_02b12dbc(void *);

namespace {
struct Object {
    char padding_0[0xE4];
    unsigned char flag_e4;
};
}

extern "C" void fn_0208924c(void *object)
{
    if (((Object *)object)->flag_e4 != 0) {
        fn_02b12dbc((char *)object + 0x40);
        ((Object *)object)->flag_e4 = 0;
    }
}
