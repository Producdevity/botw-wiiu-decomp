extern "C" void fn_03901180(void*, void*);

namespace {
struct Source {
    char padding_0[0x55C];
    char field_55c;
    char padding_55d[0xF];
    int value;
};

struct Destination {
    char padding_0[0xD0];
    int value;
};
}

extern "C" void fn_03900198(void* object, void* destination)
{
    fn_03901180(&((Source*)object)->field_55c, destination);
    ((Destination*)destination)->value = ((Source*)object)->value;
}
