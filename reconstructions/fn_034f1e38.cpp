namespace {
struct Object {
    char padding_0[0xA];
    unsigned short counter;
};
}

extern "C" void fn_034f1e38(void* arg0) {
    Object* object = (Object*)arg0;
    unsigned short counter = object->counter;
    if (counter != 0) {
        object->counter = counter - 1;
    }
}
