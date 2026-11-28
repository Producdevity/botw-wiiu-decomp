extern "C" void fn_02ea97b4(void*, int);
extern "C" void fn_02eaa2b4(void*, int);
extern "C" void fn_02eaa420(void*, int);
extern "C" void fn_02f22f20(void*, void*);
extern "C" void * data_104698f8;

namespace {
struct Object {
    char padding_0[0x907C];
    void *child;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_02f594e8(void *object, void *kind) {
    if (kind == 0) {
        fn_02ea97b4(data_104698f8, 1);
    } else if (kind == reinterpret_cast<void *>(1)) {
        fn_02eaa2b4(data_104698f8, 1);
    } else if (kind == reinterpret_cast<void *>(2)) {
        fn_02eaa420(data_104698f8, 1);
    }
    if (fields(object)->child != 0) {
        fn_02f22f20(fields(object)->child, kind);
    }
}
