namespace {
struct Object {
    char padding_0[0x20];
    char member_20[0x4D];
    unsigned char flag_6d;
};
}

extern "C" void fn_030980d4(void*);

extern "C" void fn_03422eb4(void* object)
{
    int flag = ((Object *)object)->flag_6d;
    if (flag == 0) {
        fn_030980d4(((Object *)object)->member_20);
        ((Object *)object)->flag_6d = 1;
    }
}
