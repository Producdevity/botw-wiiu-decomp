extern "C" void fn_020e3d54(void* object);
extern "C" void fn_020e45dc(void* object);

namespace {
struct Object {
    char padding_0[0x100];
    unsigned char* flag;
};
}

extern "C" void fn_020e84a0(void* object)
{
    if (*((Object*)object)->flag != 0) {
        fn_020e3d54(object);
    }
    fn_020e45dc(object);
}
