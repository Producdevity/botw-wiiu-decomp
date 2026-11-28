namespace {
struct Object {
    char padding_0[0x10];
    char member_10[1];
};
}

extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);
extern "C" void fn_038d4da0(void*, void*);

extern "C" void fn_038d4b50(void *object, void *context) {
    fn_030bb668(((Object *)object)->member_10);
    fn_038d4da0(object, context);
    fn_030bb69c(((Object *)object)->member_10);
}
