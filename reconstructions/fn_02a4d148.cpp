extern "C" int fn_033949bc(void*, int);

namespace {
struct Object {
    char padding_0[16];
    char member[1];
};
}

extern "C" int fn_02a4d148(void* object) {
    if (fn_033949bc(((Object *) object)->member, 0xF9C66DEC) != 0 || fn_033949bc(((Object *) object)->member, 0xF321A28C) != 0) {
        return 1;
    }
    return 0;
}
