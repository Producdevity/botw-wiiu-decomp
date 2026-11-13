namespace {
struct InferredObject {
    unsigned char padding_0[230];
    unsigned short value;
};
}

extern "C" unsigned int fn_0344a50c(const InferredObject* object) {
    return (static_cast<unsigned int>(object->value) & 0x1u);
}
