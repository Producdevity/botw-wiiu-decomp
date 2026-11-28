namespace {
struct Object {
    char padding_0[0x40810];
    int flags;
};
}

extern "C" void fn_0304e5d8(void*, void*);

extern "C" int data_105481d0;

extern "C" void fn_03050d50(void *object) {
    fn_0304e5d8(object, &data_105481d0);
    ((Object *)object)->flags |= 4;
}
