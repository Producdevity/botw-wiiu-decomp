namespace {
struct InferredObject {
    unsigned char padding_0[8];
    unsigned int value;
};
}

extern "C" unsigned int fn_03f50510(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x3fffffffu);
}
