namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" void fn_03906160(InferredObject* object) {
    object->value += 1u;
}
