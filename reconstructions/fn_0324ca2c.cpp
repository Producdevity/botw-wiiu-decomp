extern "C" int fn_0324d56c(void *);
extern "C" int fn_0324d61c(void*, void*);

namespace {
struct Object {
    char padding_0[0x2C];
    char member[1];
};
}

extern "C" int fn_0324ca2c(void *object) {
    int result = 0;

    if (fn_0324d56c(object) != 0) {
        result = fn_0324d61c(object, ((Object *)object)->member);
    }
    return result;
}
