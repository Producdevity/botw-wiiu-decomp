namespace {
struct InferredInner {
    float value;
};

struct InferredObject {
    unsigned char padding_0[20];
    InferredInner* inner;
};
}

extern "C" float fn_02307980(const InferredObject* object) {
    return object->inner->value;
}
