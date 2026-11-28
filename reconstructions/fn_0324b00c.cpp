typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0xec];
    unsigned char member[1];
};
}

extern "C" int fn_0324d56c(void *);
extern "C" int fn_0324d61c(void*, void*);

extern "C" s32 fn_0324b00c(void *object) {
    s32 result = 0;
    if (fn_0324d56c(object) != 0) {
        result = fn_0324d61c(object, ((Object *)object)->member);
    }
    return result;
}
