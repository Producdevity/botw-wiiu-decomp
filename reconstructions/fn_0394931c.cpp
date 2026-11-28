extern "C" void fn_03628168(void*, int);

namespace {
struct Object {
    char padding_0[0xC];
    void *target;
};
}

extern "C" void fn_0394931c(void *object) {
    fn_03628168(((Object *) object)->target, 0);
    fn_03628168(((Object *) object)->target, 1);
    fn_03628168(((Object *) object)->target, 2);
}
