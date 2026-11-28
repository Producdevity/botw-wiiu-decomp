extern "C" void fn_03511f40(void *, void *);

namespace {
struct Object {
    char padding_0[4];
    char member_4[0x60];
    unsigned char flag_64;
};
}

extern "C" void fn_035182b8(void *object, void *argument)
{
    int flag = ((Object *)object)->flag_64;
    if (flag == 0) {
        void *member = ((Object *)object)->member_4;
        fn_03511f40(member, argument);
        ((Object *)object)->flag_64 = 1;
    }
}
