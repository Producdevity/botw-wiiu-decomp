namespace {
struct Object {
    char padding_0[0x28];
    int *state;
};
}

struct OutputView;
extern "C" void fn_03c92f6c(void*);

extern "C" int data_103e4380;
extern "C" int data_103e60bc;

extern "C" struct OutputView *fn_03cbf584(struct OutputView *object) {
    ((Object *) object)->state = &data_103e4380;
    fn_03c92f6c(object);
    ((Object *) object)->state = &data_103e60bc;
    return object;
}
