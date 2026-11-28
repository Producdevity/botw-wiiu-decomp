extern "C" void *fn_037903a8(void *, void *);
extern "C" void *fn_0379024c(void *, void *);
extern "C" void *data_1047c244;

namespace {
struct Table {
    char padding_0[0x1C];
    void (*callback)(void *, int);
};

struct Object {
    char padding_0[0xE8];
    Table *table;
};
}

extern "C" void fn_0378a864(void *object, int mode) {
    if (mode == 1) {
        void **holder = &data_1047c244;
        fn_037903a8(*holder, object);
        fn_0379024c(*holder, object);
        if (object != 0) {
            ((Object *)object)->table->callback(object, 3);
        }
    }
}
