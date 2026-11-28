typedef int s32;

extern "C" void fn_02de5c94(void *, void *);

extern "C" void *data_1046418c;

namespace {
struct Object {
    s32 flags;
    void *target;
};
}

extern "C" void fn_02de5a74(void *object) {
    fn_02de5c94(data_1046418c, ((Object *) object)->target);
    ((Object *) object)->flags &= ~1;
}
