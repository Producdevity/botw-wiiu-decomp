namespace {
struct InferredObject {
    unsigned char padding_0[80];
    unsigned int value;
};
}

extern "C" void fn_031aa454(InferredObject* object) {
    object->value += 1u;
}
