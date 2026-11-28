namespace {
struct Object {
    char padding_0[0xC];
    char member_c[0x12C];
    int state;
};
}

extern "C" void fn_03548814(void*);

extern "C" void fn_03510674(void* object)
{
    int state = ((Object *)object)->state;
    if (state != 1) {
        fn_03548814(((Object *)object)->member_c);
        ((Object *)object)->state = 1;
    }
}
