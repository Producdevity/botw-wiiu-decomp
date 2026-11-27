namespace {
struct Source {
    char padding_0[0xF8];
    float x;
    float y;
};

struct Destination {
    float x;
    float y;
};
}

extern "C" void fn_02e2a208(void* arg0, void* arg1) {
    if (arg1 != 0) {
        Source* source = (Source*)arg0;
        Destination* destination = (Destination*)arg1;
        destination->x = source->x;
        destination->y = source->y;
    }
}
