struct WindControl;
extern "C" void fn_0246893c(WindControl*);
extern "C" void fn_030ea03c(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_100129b8;

namespace {
struct Object {
    char padding_0[0x118];
    char member_118[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_02093ea8(void *object) {
    Pair pair;
    fn_0246893c(static_cast<WindControl *>(object));
    pair.second = &data_10263910;
    pair.first = &data_100129b8;
    fn_030ea03c(object, static_cast<Object *>(object)->member_118, &pair);
}
