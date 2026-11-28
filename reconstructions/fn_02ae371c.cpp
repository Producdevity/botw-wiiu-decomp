extern "C" void *fn_02af8fd8(void *);

namespace {
struct Object {
    char padding_0[0xD8];
    unsigned char flags_d8;
};

struct Target {
    char padding_0[0x7DC];
    unsigned char value_7dc;
};
}

extern "C" unsigned char fn_02ae371c(void *object)
{
    Target *target;
    int invalid = ((((Object *)object)->flags_d8 >> 3) & 1) || ((target = (Target *)fn_02af8fd8(object)) == 0);
    if (invalid) {
        return 0;
    }
    return target->value_7dc;
}
