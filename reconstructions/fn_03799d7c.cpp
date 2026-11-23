namespace {
struct Owner {
    unsigned char unknown_000[1096];
    void* child;
};
}

extern "C" void fn_032a12a0(void* child);

extern "C" void fn_03799d7c(Owner* owner) {
    if (owner->child)
        fn_032a12a0(owner->child);
}
