extern "C" int fn_0294f588(int);
extern "C" int fn_0378db34(void *);

namespace {
struct Vtable {
    unsigned char padding_0[0x174];
    int (*handle)(void *, int, void *);
};

struct Object {
    int id;
    unsigned char padding_4[8];
    Vtable *vtable;
};
}

extern "C" int fn_026e3ac0(void *arg0, int arg1, void *arg2, int arg3) {
    if ((arg3 == 0 && fn_0294f588(static_cast<Object *>(arg0)->id) != 0) ||
        (fn_0378db34(arg2) != 0 && static_cast<Object *>(arg0)->vtable->handle(arg0, arg1, arg2) == 0)) {
        return 1;
    }
    return 0;
}
