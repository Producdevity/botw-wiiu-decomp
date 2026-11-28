extern "C" void fn_0304cc00(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" int data_1025a7ec;

namespace {
struct Object {
    char padding_0[0x4079C];
    char block_4079c[1];
};
}

extern "C" void fn_0304cd84(void *object) {
    struct { const void* first; const void* second; } pair;

    pair.second = &data_10263910;
    pair.first = &data_1025a7ec;
    fn_0304cc00(object, ((Object *)object)->block_4079c, &pair.first);
}
