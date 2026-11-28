typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02ef869c(void*, int, void*, void*);
extern "C" void fn_02ef87e8(void*);

namespace {
struct Object {
    char padding_0[0x70];
    s32 enabled;
};

struct Request {
    u8 kind;
    char padding_1[3];
    void *first;
    void *second;
};
}

extern "C" void fn_02ef8858(void *object, void *request) {
    if (((Object *) object)->enabled != 0) {
        fn_02ef869c(object, ((Request *) request)->kind, ((Request *) request)->first, ((Request *) request)->second);
        fn_02ef87e8(object);
    }
}
