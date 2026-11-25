struct ActorMatrix {
    unsigned char before_row1_col3[532];
    float row1Col3;
};

struct AirOctaFlyUp {
    const ActorMatrix* actor;
    unsigned char unknown_04[40];
    float airOctaY;
};

extern "C" void* fn_024c4b34(void* self);
extern "C" void fn_024c4674(void* dataMgr);
extern "C" void fn_037b8284(void* receiver, const void* key, void* value);
extern "C" const float data_100c8050;
extern "C" int data_100c8054;

extern "C" void fn_024c4bb8(void* self) {
    AirOctaFlyUp* octa = static_cast<AirOctaFlyUp*>(self);
    void* dataMgr = fn_024c4b34(self);
    if (dataMgr != 0) {
        *reinterpret_cast<float*>(static_cast<char*>(dataMgr) + 216) = data_100c8050;
        fn_024c4674(dataMgr);
    }
    octa->airOctaY = octa->actor->row1Col3;
    fn_037b8284(self, &data_100c8054, 0);
}
