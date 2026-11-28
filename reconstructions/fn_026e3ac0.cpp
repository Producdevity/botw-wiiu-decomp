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

extern "C" int fn_026e3ac0(void *object, int command, void *message, int force) {
    if ((force == 0 && fn_0294f588(static_cast<Object *>(object)->id) != 0) ||
        (fn_0378db34(message) != 0 && static_cast<Object *>(object)->vtable->handle(object, command, message) == 0)) {
        return 1;
    }
    return 0;
}
