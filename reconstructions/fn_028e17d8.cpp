extern "C" void fn_0383e968(void *, int, int, int);
extern "C" int fn_0383f578(void*, int);

extern "C" int data_1015ad08;

namespace {
struct Object {
    void *owner;
    char padding_4[0x7C];
    char member[1];
};
}

extern "C" void fn_028e17d8(void **object) {
    if (fn_0383f578(((Object *) object)->member, 1) == 0) {
        fn_0383e968(((Object *) object)->owner, (int) &data_1015ad08, 1, (int) ((Object *) object)->member);
    }
}
