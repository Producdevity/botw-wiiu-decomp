extern "C" void fn_03511f40(void *, void *);
namespace {
struct Object {
    char padding_0[4];
    char member_4[0x60];
    unsigned char flag_64;
    char padding_65;
    char flag_66;
};
}
extern "C" void fn_03514fb0(void *self, void *other)
{
    ((Object *)self)->flag_66 = 0;
    int done = ((Object *)self)->flag_64;
    if (done == 0) {
        fn_03511f40(((Object *)self)->member_4, other);
        ((Object *)self)->flag_64 = 1;
    }
}
