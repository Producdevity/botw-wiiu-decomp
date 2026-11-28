extern "C" int fn_02fed1dc();

namespace {
struct Object {
    char padding_0[0x1B78];
    int count;
    char padding_1b7c[8];
    int flag_1b84;
    char padding_1b88[0x34];
    int flag_1bbc;
};
}

extern "C" int fn_02feed08(void* object)
{
    if (((Object*)object)->count <= 0 || ((Object*)object)->flag_1b84 == 0 ||
        (((Object*)object)->flag_1bbc != 0 && fn_02fed1dc() == 0)) {
        return 0;
    }
    return 1;
}
