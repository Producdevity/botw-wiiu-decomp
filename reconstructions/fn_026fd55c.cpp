extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int fn_0383f578(void*, int);

extern "C" int data_1011a410;

namespace {
struct Object {
    void *owner;
    char padding_4[0xF8];
    char member[1];
};
}

extern "C" void fn_026fd55c(void **object) {
    if (fn_0383f578(((Object *) object)->member, 0) == 0) {
        fn_0383e968(((Object *) object)->owner, (int) &data_1011a410, 0, (int) ((Object *) object)->member);
    }
}
