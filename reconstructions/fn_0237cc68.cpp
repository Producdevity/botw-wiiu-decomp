struct AxisOffset {
    char padding[16];
    const unsigned* axis;
    char padding2[16];
    const float* base;
    const float* offset;
};

extern "C" float fn_0237cc68(const AxisOffset* self) {
    switch (*self->axis) {
    case 0: return self->base[1] + self->offset[0];
    case 1: return self->base[1] + self->offset[1];
    case 2: {
        float base = self->base[1];
        base += self->offset[2];
        return base;
    }
    default: return self->base[1];
    }
}
