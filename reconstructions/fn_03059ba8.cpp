namespace {
struct Source {
    char padding_0[0x40CC8];
    float value;
};

struct Destination {
    char padding_0[0xC];
    float value;
};
}

extern "C" void fn_03059ba8(void* source, void* destination) {
    if (destination != 0) {
        ((Destination*)destination)->value = ((Source*)source)->value;
    }
}
