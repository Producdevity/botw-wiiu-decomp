extern "C" int fn_039cf7ec(void*);
extern "C" int fn_039cf824(void*);
extern "C" int fn_039cf850(void*);
extern "C" int fn_039cf888(void*);
extern "C" void fn_03a5cc1c(void*);
extern "C" void fn_03a5df04(void*);
extern "C" void fn_03a5ef8c(void*);
extern "C" void fn_03b28890(void*);

namespace {
struct Object {
    char padding_0[0x21C];
    void *first;
    void *second;
    void *third;
    char padding_228[4];
    void *fourth;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_039d1294(void *object) {
    if (fn_039cf7ec(object) != 0) {
        fn_03b28890(fields(object)->first);
    }
    if (fn_039cf888(object) != 0) {
        fn_03a5cc1c(fields(object)->third);
    }
    if (fn_039cf850(object) != 0) {
        fn_03a5df04(fields(object)->second);
    }
    if (fn_039cf824(object) != 0) {
        fn_03a5ef8c(fields(object)->fourth);
    }
}
