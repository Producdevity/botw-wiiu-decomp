extern "C" bool fn_03485c18(const void *);
extern "C" void fn_03485f68(void*);
struct InferredObject;
extern "C" unsigned int fn_03486c10(const void*);

namespace {
struct Object {
    char padding_0[0x88];
    InferredObject *target;
};
}

extern "C" void fn_0260c56c(void *object) {
    if (fn_03485c18(((Object *) object)->target) || fn_03486c10(((Object *) object)->target) != 0) {
        fn_03485f68(((Object *) object)->target);
    }
}
