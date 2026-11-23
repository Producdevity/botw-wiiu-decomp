struct InferredObject;
extern "C" unsigned int fn_0318fe70(const void*);
extern "C" void fn_03191b90(void*);
extern "C" void fn_03191b98(void*);
extern "C" void fn_03191ba0(void*);
extern "C" void fn_03191ba8(void*);
extern "C" void fn_03192378(void);

extern "C" void *data_1046cf88;

extern "C" void fn_0318ff00(void *arg0) {
    if (fn_0318fe70((struct InferredObject *) arg0) != 0) {
        fn_03191ba0(data_1046cf88);
        fn_03192378();
        fn_03191ba8(data_1046cf88);
        fn_03192378();
        fn_03191b90(data_1046cf88);
        fn_03191b98(data_1046cf88);
    }
}
