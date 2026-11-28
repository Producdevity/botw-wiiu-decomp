extern "C" void fn_035960f4(void* target, void* value, void* extra);
extern "C" void fn_0350b448(void* object);
extern "C" void fn_035963a4(void* target);

namespace {
struct Object {
    char padding_0[0x10];
    signed char flag;
    char padding_11[3];
    void *target;
    char padding_18[8];
    void *value;
};
}

extern "C" void fn_0350be88(void* object) {
    void* value = ((Object *)object)->value;
    ((Object *)object)->flag = 0;
    if (value != 0) {
        void* target = ((Object *)object)->target;
        if (target != 0) {
            fn_035960f4(target, value, (void*)-1);
        }
    }
    fn_0350b448(object);
    void* target = ((Object *)object)->target;
    if (target != 0) {
        fn_035963a4(target);
    }
}
