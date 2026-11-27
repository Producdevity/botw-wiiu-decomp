struct InferredObject;
extern "C" bool fn_03c124c0(const void*);

extern "C" int fn_03c2a428(struct InferredObject **holder) {
    struct InferredObject *object = *holder;

    if (object == 0 || fn_03c124c0(object) == 0) {
        return 0;
    }
    return 1;
}
