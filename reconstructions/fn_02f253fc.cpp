extern "C" void fn_02f0a74c(void *, void *);
extern "C" int fn_02f24d98(void *, void *);
extern "C" void fn_02f24e6c(void *, int);
extern "C" void fn_02f25290(void *, void *);

namespace {
struct Source {
    char padding_0[8];
    void *value_8;
};
}

extern "C" void fn_02f253fc(void *object, void *source)
{
    fn_02f24d98(object, 0);
    fn_02f24e6c(object, 3);
    fn_02f25290(object, ((Source *)source)->value_8);
    fn_02f0a74c((char *)object + 0xE4, source);
}
