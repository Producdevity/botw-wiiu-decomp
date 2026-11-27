namespace {
struct Source {
    char padding_0[0xA4];
    int x;
    int y;
    int z;
};

struct Destination {
    int x;
    int y;
    int z;
};
}

extern "C" void fn_0240a1ec(void* arg0, void* arg1) {
    if (arg1 != 0) {
        ((Destination*)arg1)->x = ((Source*)arg0)->x;
        ((Destination*)arg1)->y = ((Source*)arg0)->y;
        ((Destination*)arg1)->z = ((Source*)arg0)->z;
    }
}
