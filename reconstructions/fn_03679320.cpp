namespace {
struct Object {
    unsigned char padding_0[0x604];
    int count;
};
}

extern "C" void fn_03679320(void *arg0) {
    if (static_cast<Object *>(arg0)->count <= 1) {
        static_cast<Object *>(arg0)->count = 0;
    }
}
