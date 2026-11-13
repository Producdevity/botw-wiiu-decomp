namespace {
struct InferredObject {
    unsigned char padding_0[64];
    unsigned int value;
};
}

extern "C" void fn_03f3d94c(InferredObject* object) {
    object->value += 1u;
}
