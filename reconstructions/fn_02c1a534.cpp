extern "C" bool fn_03485c18(const void*);
extern "C" void fn_03485f68(void*);
struct InferredObject;
extern "C" unsigned int fn_03486c10(const void*);

extern "C" void fn_02c1a534(struct InferredObject* object) {
    if (object != 0 && (fn_03485c18(object) != 0 || fn_03486c10(object) != 0)) {
        fn_03485f68(object);
    }
}
