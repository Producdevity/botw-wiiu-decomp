namespace {
struct InferredObject {
    unsigned char padding_0[4];
    unsigned int value;
};
}

extern "C" void fn_039bb23c(InferredObject* object) {
    object->value += 16u;
}
