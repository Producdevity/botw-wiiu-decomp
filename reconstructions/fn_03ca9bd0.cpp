extern "C" int fn_03ca9b64(void*, int, void*);

namespace {
struct Object {
    char padding_0[0x88];
    void *first;
    void *second;
    void *third;
};
}

extern "C" void fn_03ca9bd0(void *object) {
    ((Object *) object)->first = (void *) fn_03ca9b64(object, 1, ((Object *) object)->first);
    ((Object *) object)->second = (void *) fn_03ca9b64(object, 2, ((Object *) object)->second);
    ((Object *) object)->third = (void *) fn_03ca9b64(object, 3, ((Object *) object)->third);
}
