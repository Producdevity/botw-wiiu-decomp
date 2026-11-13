namespace {
struct InferredObject {
    unsigned char padding_0[2020];
    unsigned int value;
};
}

extern "C" unsigned int fn_02a10478(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) >> 2) & 0x1u);
}
