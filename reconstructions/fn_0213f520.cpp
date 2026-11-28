extern "C" int fn_0213ee88(void *);

namespace {
struct Object {
    char padding_0[0x64];
    void **slot_64;
};
}

extern "C" int fn_0213f520(void *object)
{
    if (fn_0213ee88(object) != 0) {
        *((Object *)object)->slot_64 = (char *)object + 0xD4;
        return 1;
    }
    return 0;
}
