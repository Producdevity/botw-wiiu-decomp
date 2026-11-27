namespace {
struct Vtable {
    unsigned char padding_0[108];
    void (*notify)(void *, int);
};

struct Object {
    unsigned char padding_0[12];
    Vtable *vtable;
};
}

extern "C" void fn_02af8f60(void* arg0) {
    int index = 7;
    int remaining = 4;
    do {
        ((Object *)arg0)->vtable->notify(arg0, index);
        remaining -= 1;
        index += 1;
    } while (remaining != 0);
}
