extern "C" void fn_02a2d6d4(void*, void*);
extern "C" char* data_10463798;

namespace {
struct Owner {
    char padding_0[0x1CDC];
    void *value_1cdc;
};
}

extern "C" void fn_02f7f450(void *object, void *value) {
    fn_02a2d6d4(data_10463798, value);
    ((Owner *) object)->value_1cdc = value;
}
