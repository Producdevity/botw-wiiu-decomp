namespace {
struct InferredInner {
    unsigned char padding_0[260];
    float value;
};

struct InferredObject {
    unsigned char padding_0[124];
    InferredInner* inner;
};
}

extern "C" float fn_03462678(const InferredObject* object) {
    return object->inner->value;
}
