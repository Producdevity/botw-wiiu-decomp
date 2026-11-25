struct Opaque_0340a748 {
    unsigned char padding_0[352];
    unsigned int value;
};

extern "C" void fn_0340a748(Opaque_0340a748* object) {
    object->value |= 0x10000u;
}
