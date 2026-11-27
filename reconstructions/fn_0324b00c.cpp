typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0xec];
    unsigned char member[1];
};
}

extern "C" int fn_0324d56c(void *);
extern "C" int fn_0324d61c(void*, void*);

extern "C" s32 fn_0324b00c(void *arg0) {
    s32 result = 0;
    if (fn_0324d56c(arg0) != 0) {
        result = fn_0324d61c(arg0, ((Object *)arg0)->member);
    }
    return result;
}
