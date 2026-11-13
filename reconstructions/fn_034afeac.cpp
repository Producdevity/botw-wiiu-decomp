namespace {
struct InferredInner {
    unsigned char padding_0[16];
    float value;
};

struct InferredObject {
    unsigned char padding_0[20];
    InferredInner* inner;
};
}

extern "C" float fn_034afeac(const InferredObject* object) {
    return object->inner->value;
}
