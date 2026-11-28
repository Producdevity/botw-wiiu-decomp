struct OwnedBuffer;
extern "C" void fn_0308ead0(OwnedBuffer *);

namespace {
struct Object {
    char padding_0[4];
    char first[8];
    int first_count;
    char second[8];
    int second_count;
};
}

extern "C" void fn_031eeb34(void *object) {
    if (((Object *) object)->first_count != 0) {
        fn_0308ead0((OwnedBuffer *) ((Object *) object)->first);
    }
    if (((Object *) object)->second_count != 0) {
        fn_0308ead0((OwnedBuffer *) ((Object *) object)->second);
    }
}
