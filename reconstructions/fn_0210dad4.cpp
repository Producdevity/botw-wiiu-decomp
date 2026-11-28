extern "C" int fn_03396390(void*);
extern "C" int fn_033976b4(void*);

namespace {
struct Object {
    char padding_0[4];
    char member[1];
};
}

extern "C" int fn_0210dad4(int unused, void *object) {
    if (fn_03396390(((Object *) object)->member) != 0 || fn_033976b4(((Object *) object)->member) != 0) {
        return 1;
    }
    return 0;
}
