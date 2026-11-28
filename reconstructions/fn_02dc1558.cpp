extern "C" void fn_02dc0ea4(void*, void*, void*);
extern "C" void fn_031b8de0(void*, void*, void*);

namespace {
struct Source {
    char padding_0[0x1C];
    void *value_1c;
};
}

extern "C" void fn_02dc1558(void *object, void *source, void *arg) {
    fn_031b8de0(object, source, arg);
    fn_02dc0ea4(object, ((Source *) source)->value_1c, arg);
}
