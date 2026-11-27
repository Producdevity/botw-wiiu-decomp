namespace {
struct Object {
    unsigned char padding_0[0x28];
    int state;
};
}

extern "C" void fn_0309f41c(void *arg0) {
    if (static_cast<Object *>(arg0)->state == 0) {
        static_cast<Object *>(arg0)->state = 1;
    }
}
