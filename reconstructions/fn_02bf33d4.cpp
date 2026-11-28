extern "C" float fn_02e58b34(float);
extern "C" float fn_02e58b64(float);

namespace {
struct Object {
    char padding_0[364];
    float *source_16c;
    float *source_170;
    float *source_174;
    float *source_178;
    char padding_17c[92];
    float result_1d8;
    float result_1dc;
    float result_1e0;
    float result_1e4;
};
}

extern "C" void fn_02bf33d4(void* object) {
    ((Object *) object)->result_1d8 = fn_02e58b34(*((Object *) object)->source_16c);
    ((Object *) object)->result_1dc = fn_02e58b34(*((Object *) object)->source_170);
    ((Object *) object)->result_1e0 = fn_02e58b64(*((Object *) object)->source_174);
    ((Object *) object)->result_1e4 = fn_02e58b64(*((Object *) object)->source_178);
}
