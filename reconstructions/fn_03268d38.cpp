extern "C" bool fn_030e9d18(const void *, void *, const void *);
extern "C" void fn_032613e4(void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_1029abb8;

namespace {
struct Object {
    char padding_0[0x8c];
    char member_8c[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_03268d38(void *object) {
    Pair pair;
    fn_032613e4(object);
    pair.second = &data_10263910;
    pair.first = &data_1029abb8;
    fn_030e9d18(object, static_cast<Object *>(object)->member_8c, &pair);
}
