namespace {
struct InferredObject {
    unsigned char padding_0[74];
    unsigned short value;
};
}

extern "C" unsigned int fn_03c9f390(const InferredObject* object) {
    return ((static_cast<unsigned int>(object->value) << 3) & 0xfffffff8u);
}
