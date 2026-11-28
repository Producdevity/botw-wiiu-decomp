struct BeamMove;
extern "C" void fn_021115a8(BeamMove*);
extern "C" bool fn_030e9be0(const void *, void *, const void *);
extern "C" const unsigned char data_10263910;
extern "C" int data_10068538;

namespace {
struct Object {
    char padding_0[0x44];
    char member_44[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_0226f7e4(void *object) {
    Pair pair;
    fn_021115a8(static_cast<BeamMove *>(object));
    pair.second = &data_10263910;
    pair.first = &data_10068538;
    fn_030e9be0(object, static_cast<Object *>(object)->member_44, &pair);
}
