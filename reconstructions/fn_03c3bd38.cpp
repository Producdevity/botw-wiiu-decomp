extern "C" void fn_03c1e728(void*);
extern "C" void fn_03c1e9b0(void*);

namespace {
struct Object {
    char padding_0[0xB0];
    unsigned char flag_b0;
    unsigned char flag_b1;
    char padding_b2[0x186];
    void *child;
};
}

extern "C" void fn_03c3bd38(void* object)
{
    void* child = ((Object *)object)->child;
    if (child != 0) {
        fn_03c1e728(child);
        fn_03c1e9b0(((Object *)object)->child);
        ((Object *)object)->child = 0;
        ((Object *)object)->flag_b0 = 0;
        ((Object *)object)->flag_b1 = 0;
    }
}
