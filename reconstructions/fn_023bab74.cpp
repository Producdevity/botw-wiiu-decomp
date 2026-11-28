extern "C" void fn_02dc8934(void*, void*);
extern "C" int fn_035fd7c8(void*);
extern "C" void fn_035fede0(void*, void*);
extern "C" void* data_1047b054;

extern "C" void *data_1046407c;

extern "C" void fn_023bab74(void **object) {
    void *instance;

    fn_02dc8934(data_1046407c, *object);
    instance = data_1047b054;
    if (instance != 0 && fn_035fd7c8(instance) != 0) {
        fn_035fede0(instance, 0);
    }
}
