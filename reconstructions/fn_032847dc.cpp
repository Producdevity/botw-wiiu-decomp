namespace {
struct Object {
    char padding_0[0x540];
    void *first;
    void *second;
};
}

extern "C" void fn_03486fe8(void*, void*);
extern "C" void fn_03487098(void *, void *);
extern "C" void fn_0348c528(void*, int);

extern "C" void fn_032847dc(void *object, void *target) {
    fn_03486fe8(target, ((Object *) object)->first);
    fn_03487098(target, ((Object *) object)->second);
    fn_0348c528(target, 1);
}
