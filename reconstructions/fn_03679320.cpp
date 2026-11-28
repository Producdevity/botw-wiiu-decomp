namespace {
struct Object {
    unsigned char padding_0[0x604];
    int count;
};
}

extern "C" void fn_03679320(void *object) {
    if (static_cast<Object *>(object)->count <= 1) {
        static_cast<Object *>(object)->count = 0;
    }
}
