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

extern "C" void fn_02e2a208(void* object, void* out) {
    if (out != 0) {
        Source* source = (Source*)object;
        Destination* destination = (Destination*)out;
        destination->x = source->x;
        destination->y = source->y;
    }
}
