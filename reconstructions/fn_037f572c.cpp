namespace {
struct InferredObject {
    unsigned char padding_0[12];
    unsigned int value;
};
}

extern "C" bool fn_037f572c(const InferredObject* object) {
    return object->value == 0;
}
