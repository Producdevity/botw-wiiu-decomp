extern "C" void fn_029dac9c(void*);
extern "C" void fn_030ff774(void*, void*, void*);
extern "C" const unsigned char data_10263910;
extern "C" int data_101826bc;

namespace {
struct Object {
    char padding_0[0xe4];
    char member_e4[1];
};

struct Pair {
    const void *first;
    const void *second;
};
}

extern "C" void fn_029db380(void *object) {
    Pair pair;
    fn_029dac9c(object);
    pair.second = &data_10263910;
    pair.first = &data_101826bc;
    fn_030ff774(object, static_cast<Object *>(object)->member_e4, &pair);
}
