extern "C" float fn_04210d48(float);
extern "C" float data_1028aaa4;
extern "C" float data_1028aaa8;
extern "C" float data_1028ab30;
extern "C" float data_1028ab34;

extern "C" float fn_031703dc(void* self, float value) {
    float scaled;
    scaled = (fn_04210d48(value) + data_1028aaa8) * data_1028aaa4;
    return scaled * data_1028ab30 + data_1028ab34;
}
