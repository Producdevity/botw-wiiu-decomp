extern "C" void fn_036282e4(void*, int);

namespace {
struct Object {
    char padding_0[0xC];
    void *target;
};
}

extern "C" void fn_039494a8(void *object) {
    fn_036282e4(((Object *) object)->target, 2);
    fn_036282e4(((Object *) object)->target, 1);
    fn_036282e4(((Object *) object)->target, 0);
}
