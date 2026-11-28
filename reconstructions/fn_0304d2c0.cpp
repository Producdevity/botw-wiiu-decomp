extern "C" void fn_0304cc00(void*, void*, void*);
extern "C" const unsigned char data_10263910;

extern "C" int data_1025a838;

namespace {
struct Object {
    char padding_0[0x407CC];
    char block_407cc[1];
};
}

extern "C" void fn_0304d2c0(void *object) {
    struct { const void* first; const void* second; } pair;

    pair.second = &data_10263910;
    pair.first = &data_1025a838;
    fn_0304cc00(object, ((Object *)object)->block_407cc, &pair.first);
}
