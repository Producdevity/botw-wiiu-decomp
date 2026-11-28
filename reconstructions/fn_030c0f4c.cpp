namespace {
struct Table {
    char padding_0[0x5C];
    int (*prepare)(void *, void *);
    char padding_60[4];
    int (*run)(void *, void *, void *, int);
};

struct Object {
    unsigned char pending;
    unsigned char running;
    char padding_2[2];
    char first_region[0x40];
    char second_region[0x40];
    int value_84;
    char padding_88[8];
    Table *table;
};

inline Object *fields(void *object) {
    return reinterpret_cast<Object *>(object);
}
}

extern "C" void fn_030c0f4c(void* object) {
    if (fields(object)->pending != 0) {
        fields(object)->table->prepare(object, fields(object)->first_region);
        fields(object)->pending = 0;
        fields(object)->running = 1;
        fields(object)->table->run(object, fields(object)->second_region, fields(object)->first_region, fields(object)->value_84);
        fields(object)->running = 0;
        return;
    }
    if (fields(object)->running != 0) {
        fields(object)->table->run(object, fields(object)->second_region, fields(object)->first_region, fields(object)->value_84);
        fields(object)->running = 0;
    }
}
