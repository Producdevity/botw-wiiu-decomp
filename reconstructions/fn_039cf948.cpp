typedef unsigned char u8;
typedef int s32;

extern "C" void fn_0399c200(void *, void *, void *);
extern "C" int fn_039cf8c0(void*, void*, void*);
extern "C" void fn_03a5add8(void*, void*, int);
extern "C" void fn_03a5b498(void*, void*, int, void*, void*);

namespace {
struct Target {
    unsigned char padding_0[0x4A4];
    u8 pending;
};

struct Owner {
    unsigned char padding_0[0x230];
    Target *target;
};

struct Request {
    u8 kind;
    unsigned char padding_1[0x1AF];
    void *payload;
};
}

extern "C" void fn_039cf948(void *owner, void *context, void *request) {
    Target *target;

    if (fn_039cf8c0(owner, context, request) != 0) {
        fn_03a5b498(((Owner *)owner)->target, context, (s32)((Request *)request)->kind, ((Request *)request)->payload, 0);
    }
    target = ((Owner *)owner)->target;
    if ((s32)target->pending != 0) {
        fn_03a5add8(target, context, (s32)((Request *)request)->kind);
        fn_0399c200(request, context, 0);
    }
}
