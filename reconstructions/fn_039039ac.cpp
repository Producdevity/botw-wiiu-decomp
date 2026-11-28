extern "C" const float data_103375c0;
extern "C" char* data_1047c390;
extern "C" void fn_03ba9d2c(int, float);
extern "C" void* fn_03baa330(int);

namespace {
struct Settings {
    unsigned char padding_0[44];
    float scale;
};

struct Globals {
    unsigned char padding_0[32];
    Settings *settings;
};

struct Entry {
    unsigned char padding_0[104];
    float value;
};
}

extern "C" void fn_039039ac(int owner, int handle) {
    float scale;
    Entry* entry;

    if (handle != 0) {
        entry = (Entry *)fn_03baa330(handle);
        if (entry != 0) {
            scale = data_103375c0;
            if ((void* ) data_1047c390 != 0) {
                scale = ((Globals *)data_1047c390)->settings->scale;
            }
            fn_03ba9d2c(handle, entry->value * scale);
        }
    }
}
