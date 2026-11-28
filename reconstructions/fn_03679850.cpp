extern "C" float data_10303380;
extern "C" float data_103033c8;

namespace {
struct Object {
    char padding_0[0x5E4];
    float value;
    char padding_5e8[0x38];
    int mode;
};
}

extern "C" void fn_03679850(void *object, float value)
{
    Object *view = static_cast<Object *>(object);
    float current = view->value;
    if (!(current > data_103033c8)) {
        if (value > data_10303380) {
            if (value < current) {
                return;
            }
        } else if (value > current) {
            return;
        }
    }
    view->value = value;
    view->mode = 4;
}
