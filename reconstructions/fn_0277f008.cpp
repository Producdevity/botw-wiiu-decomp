namespace {
struct Child {
    char padding_0[4];
    int id;
};

struct Object {
    char padding_0[0x2C];
    Child* child;
};
}

extern "C" void fn_0277f008(void* arg0) {
    Child* child = ((Object*)arg0)->child;
    if (child != 0) {
        child->id = -1;
    }
}
