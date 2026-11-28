extern "C" unsigned char data_103dbea8[];
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c29148(void*);
extern "C" void fn_03c291a8(void*, int);

namespace {
struct Object {
    const void *table;
    char padding_4[44];
    signed char state;
    char padding_31[3];
    char member_34;
};
}

extern "C" void fn_03c29204(void* object, int flags) {
    if (object != 0) {
        ((Object *) object)->table = data_103dbea8;
        fn_03c29148(object);
        fn_03c291a8(&((Object *) object)->member_34, 2);
        ((Object *) object)->state = 0;
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
